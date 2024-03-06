//wap to input 3 number & find out the greatest number
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter value of 3 numbers as a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("a is the greatest");
		
	}
	else{
		printf("b is the greatest");
	}
}
else{
	if(b>c){
		printf("b is the greatest");
	}
	else{
		printf("c is the greatest");
	}
}
}
