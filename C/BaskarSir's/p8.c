#include<stdio.h>
int main(){
	int i,j,num,c;
	printf("Enter num.:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		c=1;
		for(j=num;j>=1;j--){
			if(i>=j){
				printf("%d",c);
				c++;
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
    1
   12
  123
 1234
12345

*/


