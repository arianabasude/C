#include<stdio.h>
int main(){
	int i,j,num;
	printf("Enter odd num.:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=num;j++){
			if(i==1||i==j||j==num-i+1||i==num||j==1||j==num){
				printf("#");
			}
			else{
				printf(" ");
			}
		}

		
		printf("\n");
	}
	return 10;
}

/*

Enter odd num.:9
#########
##     ##
# #   # #
#  # #  #
#   #   #
#  # #  #
# #   # #
##     ##
#########


*/


