#include<stdio.h>
int main(){
	
	int num;
	printf("%s\n","Enter a num:" );
	scanf("%d",&num);
	printf("%s %d %s\n","Table of",num,"is" );
	for (int i = 1; i < 11; i++)
	{
		printf("%d %s %d %s %d\n",num,"*",i,"=",num*i );
	}



}