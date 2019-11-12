#include<stdio.h>
int main(){
	int i,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("first %d odd numbers\n",n);
	for(i=1;i<=n*2;i=i+2){
		printf("%d\n",i);

	}
}
/*
Enter n:10
first 10 odd numbers
1
3
5
7
9
11
13
15
17
19

*/