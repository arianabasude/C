#include<stdio.h>
int main(){
	int i,j,num;
	printf("Enter num.:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(i%2!=0){
			printf(" ");
		}
		for(j=1;j<=num;j++){
			if(j%2!=0){
				printf("#");
			}
			else{
				printf("*");
			}
		}

		
		printf("\n");
	}
	return 10;
}

/*

Enter num.:8
 #*#*#*#*
#*#*#*#*
 #*#*#*#*
#*#*#*#*
 #*#*#*#*
#*#*#*#*
 #*#*#*#*
#*#*#*#*

*/


