#include<stdio.h>
#include<stdlib.h>

int fun(int n){
	if(n==0)
		return 1;
	else
		return 7 + fun(n-2);
}

int main(){

	printf("%d",fun(4));
	//15
	




	return 10;
}