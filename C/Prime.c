#include<stdio.h>
int main(){
	
	int num,flag,i;
	printf("Enter number:");
	scanf("%d",&num);

	for(i=2;i<num;i++){
		if(num%i==0){
			flag=1;
			break;
		}
		else{
			flag=0;
		}
	}

	if(flag==0){
		printf("it is prime");
	}
	else{
		printf("it is not");
	}

	return 0;}
	
