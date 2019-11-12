#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Sum of first %d natural numbers:",n);
	for(i=1;i<=n;i++){
		sum=sum+i;

	}
	printf("%d\n",sum);
}
/*
Enter n:10
Sum of first 10 natural numbers:55

*/