#include<stdio.h>

int year,ans,a,b,i;
char convert(int num){
	if(num==1)
		return "I"
	else if(num==5)
		return "V"
	else if(num==10)
		return "X"
	else if(num==50)
		return "L"
	else if(num==100)
		return "C"
	else if(num==500)
		return "D"
	else if(num==1000)
		return "M"

	
}
int main()
{
	printf("Enter number:");
	scanf("%d",&num);
	ans=convert(num);
	printf("%d is %s \n",year,(ans?"leap":"not leap"));
	
	
	return 10;
}