//bit and or not

#include<stdio.h>
int main(){
	unsigned int num1,num2;

	printf("Enter A and B:");
	scanf("%d%d",&num1,&num2);
	printf("A & B:%d\n",num1&num2);
	printf("A | B:%d\n",num1|num2);
	printf("~A:%d\t~B:%d\n",~num1,~num2);

	printf("A>>1:%d\n",num1>>1);
	printf("B>>1:%d\n",num2>>1);

	printf("A<<1:%d\n",num1<<1);
	printf("B<<1:%d\n",num2<<1);


	return 10;
}

/*

APPLEs-MacBook-Air:C newmac$ gcc bit.c
APPLEs-MacBook-Air:C newmac$ ./a.out
Enter A and B:1 2
A & B:0
A | B:3
~A:-2	~B:-3
A>>1:0
B>>1:1
A<<1:2
B<<1:4
APPLEs-MacBook-Air:C newmac$ 




*/
