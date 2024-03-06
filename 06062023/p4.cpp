//wap in c to find (a+b)^2
#include<stdio.h>
#include<math.h>
main()
{
	int a,b,result;
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	result=pow(a,2)+pow(b,2)+2*a*b;
	printf("result=%d",result);
}
