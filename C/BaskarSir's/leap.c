#include<stdio.h>
int main(){
	int year,i,j;
	printf("Enter year:");
	scanf("%d",&year);
	if(year%400==0 || (year%4==0 && year%100!=0)){
		printf("%d is leap",year);
	}
	else{
		printf("%d is not leap",year);
	}


	return 10;
}