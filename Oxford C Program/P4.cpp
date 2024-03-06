//wap to calculate the area of a triangle using heros formuka.
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,area,S;
	printf("\n enter the lengths of the three sides of the triangle :");
	scanf("%f%f%f",&a,&b,&c);
	S=(a+b+c)/2;
	/* sqrt is a mathematic function defined in math,.h header file*/
	
	area=sqrt(S*(S-a)*(S-b)*(S-c));
	printf("\n area=%f",area);
}
