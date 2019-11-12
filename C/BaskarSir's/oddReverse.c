#include<stdio.h>
int main(){
	int i,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("first %d odd numbers in reverse\n",n);
	for(i=n*2-1;i>=1;i=i-2){
		printf("%d\n",i);

	}
}
/*
Enter n:10
first 10 odd numbers in reverse
19
17
15
13
11
9
7
5
3
1

*/