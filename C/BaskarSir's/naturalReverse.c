#include<stdio.h>
int main(){
	int i,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("first %d natural numbers in reverse order\n",n);
	for(i=n;i>=1;i--){
		printf("%d\n",i);

	}
}
/*
Enter n:10
first 10 natural numbers in reverse order
10
9
8
7
6
5
4
3
2
1


*/