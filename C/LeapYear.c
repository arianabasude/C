#include<stdio.h>
int main(){
	
	int year;
	printf("%s\n", "Enter Year");
	scanf("%d",&year);

	if(year%4==0 || year%400==0){
		printf("%d is leap year\n",year );
		printf("%d yeahhh\n",year%400 );
	}
	else{
		printf("%d yeahhh\n",year%400 );
		printf("%d is not leap year\n",year );
	}}