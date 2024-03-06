//wap display sum of all odd numbers from 2 to 15 
#include<stdio.h>
int main(){

int number= 2;
int sum_of_odds=0;
while(number<=15){
	if(number%2!=0){
		sum_of_odds+=number;
	}
	number++;
}
printf("the sum of all odd numbers from 2 to 15 is :%d\n",sum_of_odds);
return 0;
}
