#include<stdio.h>
int main(){
	int num,count=0,i;
	printf("Enter num");
	scanf("%d",&num);
	
	while(num!=0){
		num=num/10;
		count++;

	}
	printf("Count:%d\n",count);
}
/*
Enter num1234
Count:4
*/