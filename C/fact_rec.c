#include<stdio.h>

int num,ans;
int fact(int n){
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
	
}
int main()
{
	printf("Enter number:");
	scanf("%d",&num);
	ans=fact(num);
	printf("Fact: %d \n",ans);
	
	
	return 10;
}