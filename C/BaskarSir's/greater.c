#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter num1 and num2:");
	scanf("%d %d",&num1, &num2);
	(num1>num2)?printf("%d is greater",num1):printf("%d is greater",num2);

	return 10;
}