#include<stdio.h>

void showbit(int num){
	int r[16],i=1,j;
	
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
	int i,complement= ~ 23;
	//showbit(5225);
	printf("%d",11&00);
	
	//printf("%d",complement);
	// for(i=0;i<=10;i++){
	// 	showbit(i);
	// 	printf("\n");
	// 	printf("\nIts Complement:");
	// 	complement=~i;
	// 	printf("%d",complement);
	// 	//showbit(complement);
	// }

	return 10;
}