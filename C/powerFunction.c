#include<stdio.h>

int num,ans,a,b,i;
int power(int a, int b){
	ans=1;
	for(i=1;i<=b;i++){
		ans=ans*a;
	}
	return ans;
	
}
int main()
{
	printf("Enter a and b:");
	scanf("%d %d",&a, &b);
	ans=power(a,b);
	printf("%d power %d is: %d \n",a,b,ans);
	
	
	return 10;
}