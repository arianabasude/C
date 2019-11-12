#include<stdio.h>
int main(){
	int i,j,num;
	printf("Enter num.:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=num-i+1;j++){
			printf("#");
		}

		
		printf("\n");
	}
	return 10;
}

/*

Enter num.:5
#####
####
###
##
#

*/


