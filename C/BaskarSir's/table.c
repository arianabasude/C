#include<stdio.h>
int main(){
	int i,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Table of %d \n",n);
	for(i=1;i<=10;i++){
		printf("%d*%d=%d\n",n,i,n*i);

	}
}
/*
Enter n:11
Table of 11 
11*1=11
11*2=22
11*3=33
11*4=44
11*5=55
11*6=66
11*7=77
11*8=88
11*9=99
11*10=110

*/