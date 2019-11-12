#include<stdio.h>

int num,ans,a,b,i;
int power(int a, int b){
	if(b==0)
		return 1;
	else
		b--;
		return a*power(a,b);
	
}
int main()
{
	printf("Enter a and b:");
	scanf("%d %d",&a, &b);
	ans=power(a,b);
	printf("%d power %d is: %d \n",a,b,ans);
	
	
	return 10;
}