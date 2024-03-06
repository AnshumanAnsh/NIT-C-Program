// wap to print table for the given numbers
#include<stdio.h>
main()
{
	int i=1,number,b;
	printf("enter a number:");
	scanf("%d",&number);
	while(i<=10)
	{
		b=number*i;
		printf("%d\n",b);
		i=i+1;
		
	}
}
