#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Sum of even %d: ",n);
	for(i=1;i<=n;i++){
		printf("%d, ",i*2);
		sum=sum+i*2;

	}
	printf("==%d\n",sum);
}
/*
Enter n:3
Sum of even 3: 2, 4, 6, ==12

*/