#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,*b,**c;
	a=10;
	b=&a;
	c=&b;
	printf("%u %u %u\n",&a,b,c);
	printf("%d %d %d\n",a,*b,**c);
	printf("%u %u %u",&a,&b,&c);




	return 10;
}