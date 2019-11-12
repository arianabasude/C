#include<stdio.h>

int num,ans;
int fact(int n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact=fact*i;

	}
	return fact;
}
int main()
{
	printf("Enter number:");
	scanf("%d",&num);
	ans=fact(num);
	printf("Fact: %d \n",ans);
	
	
	return 10;
}