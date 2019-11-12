#include<stdio.h>
#include<stdlib.h>

int fun(int n){
	if(n==1)
		return 1;
	else
		return 1 + fun(n-1);
}

int main(){

	printf("%d",fun(3));
	//3
	




	return 10;
}