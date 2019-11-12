#include<stdio.h>
int main(){
	unsigned int n,i,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d ",i);
		sum+=i;
		
	}
	printf("\nSum: %d",sum);
	

	return 10;	

}