#include<stdio.h>
int main(){
	int num,sum=0,i,r;
	printf("Enter num");
	scanf("%d",&num);
	
	while(num!=0){
		r=num%10;
		sum=sum+r;
		num=num/10;

	}
	printf("Sum:%d\n",sum);
}
/*
Enter num34
Sum:7
*/