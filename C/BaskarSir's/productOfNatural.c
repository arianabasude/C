#include<stdio.h>
int main(){
	int i,n,prod=1;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Product of first %d natural numbers:",n);
	for(i=1;i<=n;i++){
		prod=prod*i;

	}
	printf("%d\n",prod);
}
/*
Enter n:5
Product of first 5 natural numbers:120

*/