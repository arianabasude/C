#include<stdio.h>
int main(){
	int i,j,num;
	printf("Enter num.:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=2*num-1;j++){
			if(i+j==2*num || i==j ||(i==1 && j%2!=0)){
				printf("*" );
			}
			else{
				printf(" " );
			}
		}
		printf("\n");
	}
	return 10;
}

/*

Enter num.:5
* * * * *
 *     * 
  *   *  
   * *   
    *    

*/