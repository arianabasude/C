#include<stdio.h>
int main(){
	int arr[6],i,first,loc=0;
	//read
	printf("Enter 5 numbers");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);	
	}
	first=arr[0];
	for(i=1;i<5;i++){
		if(first>arr[i]){
			first=arr[i];
			loc=i+1;
		}
	}

	printf("min %d and loc %d ",first,loc);

	return 10;

	}
	
	
