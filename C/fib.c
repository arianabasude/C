#include<stdio.h>
int main(){
	unsigned int n,i,a=0,b=1,temp;
	printf("Enter Number n:");
	scanf("%d",&n);
	printf("%d ",a);
	printf("%d ",b);
	for(i=3;i<=n;i++){

		temp=a+b;
		printf("%d ",temp);
		a=b;
		b=temp;

		
	}

	return 10;	

}