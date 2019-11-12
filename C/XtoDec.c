#include<stdio.h>
int main(){
	int num,sum=0,count=1,r,conversion;
	printf("Enter Anything(2,9) and Num");
	scanf("%d %d",&conversion,&num);

	while(num!=0){
		r=num%10;
		sum=sum+count*r;
		count=count*conversion;
		num=num/10;

	}
	printf("Decimal is: %d",sum);
	return 10;
}