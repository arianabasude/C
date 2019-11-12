#include<stdio.h>
int main(){
	int arr[5],i;
	//read
	printf("Enter 5 numbers");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}

	//print
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
}