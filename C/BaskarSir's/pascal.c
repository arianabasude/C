#include<stdio.h>
int main(){
	int num,i,j;
	printf("Enter Number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=num+i-1;j++){
			if(i+j<=num){
				printf(" ");
			}
			
			else{
				printf("2");
			}
		}
		printf("\n");
	}

	return 10;
}