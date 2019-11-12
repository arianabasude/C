#include<stdio.h>
int main(){
	int i,j,num;
	printf("Enter num.:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=num;j++){
			if(i==1||j==i||i==num){
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

Enter num.:5
#####
 #   
  #  
   # 
#####


*/


