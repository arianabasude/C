#include<stdio.h>
int main(){
	
	int num,rev=0,rem;
	printf("%s\n","Enter Number:" );
	scanf("%d",&num);

	while(num!=0){
		rev=rev*10;
		rem=num%10;
		num=num/10;
		rev+=rem;
		
		//printf("%d\n",rev );

	}
	printf("%s:%d\n","Reverse",rev );



}