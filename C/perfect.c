#include<stdio.h>
#include<stdlib.h>

int main(){
	int sum,i,j;

	for(j=1;j<=100;j++){
		sum=0;


		for(i=1;i<=j/2;i++){
		if(j%i==0)
			sum=sum+i;

		}

		if(sum==j)
			printf("%d\n",j);

	}
	


	return 10;
}