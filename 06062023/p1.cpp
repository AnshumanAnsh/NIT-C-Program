//write a program in c to swap two number using 3rd variable
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	printf("before swapping:a=%d,b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swapping:a=%d,b=%d",a,b);
	
}
