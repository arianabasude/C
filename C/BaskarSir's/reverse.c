#include<stdio.h>
int main(){
	int num,reverse=0,i,r;
	printf("Enter num");
	scanf("%d",&num);
	
	while(num!=0){
		r=num%10;
		reverse=reverse*10+r;
		num=num/10;

	}
	printf("reverse:%d\n",reverse);
}
/*
Enter num34
Sum:7
*/