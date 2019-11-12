#include<stdio.h>
int main(){
	int num,r[10],i=1,j;
	printf("Enter Decimal:");
	scanf("%d",&num);
	while(num!=0){
		r[i]=num%2;
		num=num/2;
		i++;

	}
	for(j=i-1;j>0;j--){
		printf("%d",r[j]);
	}
	return 10;
}