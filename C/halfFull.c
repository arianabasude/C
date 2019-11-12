#include<stdio.h>
int main(){
	int num,i,j;
	
	printf("Enter num");
	scanf("%d",&num);

	for(i=1;i<=2*num-1;i++){
		for(j=1;j<=num;j++){
			if(i<=num){
				if(i+j<=num)
					printf(" ");
				else
					printf("*");
			}
			else{
				if(i-j>=num)
					printf(" ");
				else
					printf("*");
			}
		}
		printf("\n");
	}

	return 10;

}