#include<stdio.h>
int main(){
	unsigned int num,count=0;
	printf("Enter num:");
	scanf("%d",&num);
	do{
		printf("1\n");
		count++;
	}
	while(count!=num);


	return 10;	

}