#include<stdio.h>
int main(){
	int num,i,j;
	
	printf("Enter num");
	scanf("%d",&num);

	for(i=1;i<=2*num-1;i++){
		for(j=1;j<=num+i-1;j++){
			if(i<=num){
				if(i+j<=num)
					printf(" ");
				else
				
					printf("*");
			}
			else{
				if(i-j>=num)
					printf(" ");
				else if(i+j<num*3)
					printf("*");
				
			}
		}
		printf("\n");
	}

	return 10;

}