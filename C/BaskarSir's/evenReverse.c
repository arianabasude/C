#include<stdio.h>
int main(){
	int i,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("first %d even numbers in reverse\n",n);
	for(i=n;i>=1;i--){
		printf("%d\n",i*2);

	}
}
/*
Enter n:10
first 10 even numbers in reverse
20
18
16
14
12
10
8
6
4
2

*/