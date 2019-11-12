#include<stdio.h>

void showbit(int num){
	int r[10],i=1,j;
	
	while(num!=0){
		r[i]=num%2;
		num=num/2;
		i++;

	}
	for(j=i-1;j>0;j--){
		printf("%d",r[j]);
	}
}

int main(){
	int i;
	for(i=0;i<=10;i++){
		showbit(i);
		printf("\n");
	}

	return 10;
}