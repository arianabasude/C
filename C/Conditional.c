#include<stdio.h>
int main(){
	
	int year;
	printf("%s\n", "Enter Year");
	scanf("%d",&year);

	if(year%4==0){
		if(year%100==0){
			printf("%d is not leap year\n",year );
		}
		else{
			printf("%d is leap year\n",year );
		}
	}


}