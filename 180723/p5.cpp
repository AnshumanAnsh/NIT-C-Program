// wap to calculate the sum of numbers from m to n
#include<stdio.h>
int main()
{
	int n,m,sum=0;
	printf("\n enter the value of m:");
	scanf("%d",&m);
	printf("\n enter the value of n:");
	scanf("%d",&n);
	
	while(m<= n)
	{
		sum=sum+m;
		m=m+1;
	}
	printf("\n sum=%d",sum);
	return 0;
}
