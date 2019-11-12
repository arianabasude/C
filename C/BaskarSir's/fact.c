#include<stdio.h>
int main(){
	int i,n,fact=1;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Factorial of %d: ",n);
	for(i=n;i>=1;i--){
		
		fact=fact*i;

	}
	printf("%d\n",fact);
}
/*
Enter n:4
Factorial of 4: 24

*/