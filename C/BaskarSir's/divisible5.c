#include<stdio.h>
int main(){
	int num;
	printf("Enter num:");
	scanf("%d",&num);
	num%5==0? printf("Divisible by 5"):printf("Not divisible by 5");

	return 10;
}