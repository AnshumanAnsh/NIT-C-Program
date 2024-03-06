//WAP to demonstrate the use of printf and scanf statements to read and print
//values of variables of different data types.
#include<stdio.h>
main()
{
	int num;
	float amt;
	char code;
	double pi;
	long int population_of_india;

	
	
	printf("\n enter the value of num :");
	scanf("%d",&num);
	
	printf("\n enter the value of amt :");
	scanf("%f",&amt);
	
	printf("\n enter the value of pi :");
	scanf("%e",&pi);
	
	printf("\n enter the population of india :");
	scanf("%ld",&population_of_india);
	
	printf("\n enter the value of code :");
	scanf("%c",&code);

	
	printf("\n NUM=%d \n AMT=%f \n PI=%e \n POPULATION OF INDIA=%ld \n CODE=%c ",num,amt,code,pi,population_of_india);
	return 0;
	
}
