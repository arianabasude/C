#include<stdio.h>

int year,ans,a,b,i;
int leap(int year){
	if(year%400==0 ||(year%100!=0 && year%4==0))
		return 1;
	else
		return 0;

	
}
int main()
{
	printf("Enter year:");
	scanf("%d",&year);
	ans=leap(year);
	printf("%d is %s \n",year,(ans?"leap":"not leap"));
	
	
	return 10;
}