//wap to find the factorial of a number
#include<stdio.h>
int main()
{
	int num,factorial=1;
	printf("enter a positive integer");
	scanf("%d",&num);
	while(num>0){
		factorial*=num;
		num--;
	}
	printf("factorial:%d\n",factorial);
}
