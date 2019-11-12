#include<stdio.h>
int main(){
	int arr[5],i,first;
	//read
	printf("Enter 5 numbers");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);	
	}
	first=arr[0];
	for(i=1;i<4;i++){
		if(first>arr[i]){
			first=arr[i];
		}
	}

	printf("min %d",first);

	return 10;

	}
	
	
