#include<stdio.h>
int main(){
	
	int j,flag,i;
	for(j=1;j<=100;j++){
		flag=0;

		for(i=2;i<=j/2;i++){
		if(j%i==0){
			flag=1;
			break;
		}
		else{
			flag=0;
		}
	}

	if(flag==0){
		printf("%d\n",j);
	}



	}
	


	

	return 0;}
	
