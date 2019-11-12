#include<stdio.h>
int main(){
	unsigned int n,i,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=2;i<=n*2;i++){
		if(i%2==0){
			printf("%d ",i);
			sum+=i;
		}
	}
	printf("\nSum: %d",sum);
	

	return 10;	

}