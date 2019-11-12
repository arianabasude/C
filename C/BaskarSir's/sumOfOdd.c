#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Sum of odd %d: ",n);
	for(i=1;i<=n*2;i=i+2){
		printf("%d, ",i);
		sum=sum+i;

	}
	printf("==%d\n",sum);
}
/*
Enter n:3
Sum of odd 3: 1, 3, 5, ==9

*/