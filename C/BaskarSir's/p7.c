#include<stdio.h>
int main(){
	int i,j,num,c;
	printf("Enter num.:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		c=i;
		for(j=1;j<=i;j++){
			printf("%d",c);
			c--;
		}

		
		printf("\n");
	}
	return 10;
}

/*

Enter num.:5
1
21
321
4321
54321

*/


