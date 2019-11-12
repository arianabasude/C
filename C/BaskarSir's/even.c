#include<stdio.h>
int main(){
	int i,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("first %d even numbers\n",n);
	for(i=1;i<=n;i++){
		printf("%d\n",i*2);

	}
}
/*
Enter n:10
first 10 even numbers
2
4
6
8
10
12
14
16
18
20

*/