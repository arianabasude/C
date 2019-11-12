#include<stdio.h>
int main(){
	int num,i,fact=1,nu=1,n;
	float sum,term;
	printf("Enter x and n:");
	scanf("%d %d",&num,&n);
	sum=1;
	nu=1;
	printf("%.0f",sum);

	for(i=2;i<2*n;i=i+2){

		nu=nu*num*num*(-1);
		fact=fact*i*(i-1);
		sum=sum+ (nu/fact);
		

		if(nu>0){
			printf(" +%d/%d",nu,fact);
		}
		else{
			printf(" %d/%d",nu,fact);
		}

	}
	printf("\nSum\n: %.3f",sum);
	

	return 10;

}