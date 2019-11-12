#include<stdio.h>
int main(){
	
	int a,b;
		printf("%s\n","Enter two Numbers:");
		scanf("%d %d",&a,&b);

		a=a+b;
		b=a-b;
		a=a-b;
		printf("%s %d %d","Swapped numbers are:",a,b );


}