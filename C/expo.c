#include<stdio.h>
int main(){
	unsigned int n,x,i,sum=1,current=1;
	
	printf("Enter n and x:");
	scanf("%d %d",&n,&x);
	printf("1");
	for(i=1;i<n;i++){
		current=current*x;
		printf("+%d",current);
		sum+=current;

	}
	printf("\nSum: %d",sum);
	return 10;	

}