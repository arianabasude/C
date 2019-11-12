#include<stdio.h>
int main(){
	int arr[5],i,sum=0;
	//read
	printf("Enter 5 numbers");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}

	printf("avg is: %.2f",(double)sum/5);
}