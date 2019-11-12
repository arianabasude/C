#include<stdio.h>
int main(){
	unsigned int n,i;
	printf("Enter Number n:");
	scanf("%d",&n);
	for(i=2;i<=n*2;i++){
		if(i%2==0){
			printf("%d\n",i);

		}
	}
	return 10;	

}