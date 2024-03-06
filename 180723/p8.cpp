//wap to find even numbers sum using loop
#include <stdio.h> 
int main() 
{
 int a = 0;
 int b; 
 int sum = 0; 
 printf("Enter 10 integers:\n");
  while (a < 10) { 
  scanf("%d", &b);
   if (b % 2 == 0)
    {
	 sum += b; 
	 printf("this is a even number\n");
}
a++;
}
printf("sum of the even numbers:%d\n",sum);
return 0;
}
