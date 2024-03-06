#include<stdio.h>
main()
{
	int arr[100],n,i,j,temp;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
}
printf("\n elements of array in ascendind order:");
for(i=0;i<n;i++)
{
	printf("%d\t",arr[i]);
}
return 0;
}
