#include<stdio.h>
int main(){
	int num,sum=0,count=1,r;
	printf("Enter Octal");
	scanf("%d",&num);

	while(num!=0){
		r=num%10;
		sum=sum+count*r;
		count=count*8;
		num=num/10;

	}
	printf("Decimal is: %d",sum);
	return 10;
}