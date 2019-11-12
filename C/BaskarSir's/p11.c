#include<stdio.h>
int main(){
	int i,j,num;
	printf("Enter num.:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=num;j>=1;j--){
			if(i==1||i==j||i==num){
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

Enter num.:6
######
    # 
   #  
  #   
 #    
######


*/


