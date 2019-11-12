#include<stdio.h>
int global;
int main(){
	int local;
	
	printf("global %d",global); //global 0
	printf("local %d",local); // local 215699922
	return 0;
}