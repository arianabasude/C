//even odd with binary

#include<stdio.h>
int main(){
	unsigned int num;

	printf("Enter binary or any num:");
	scanf("%d",&num);
	if(num&1)
		printf("odd %d",num&1);
	else
		printf("even %d",num&1);

	return 10;
}

/*
Enter binary:111111110
even 0APPLEs-MacBook-Air:C newmac$ ./a.out
Enter binary:^[[A^C
APPLEs-MacBook-Air:C newmac$ gcc oddeven.c
APPLEs-MacBook-Air:C newmac$ ./a.out
Enter binary or any num:12
even 0APPLEs-MacBook-Air:C newmac$ ./a.out
Enter binary or any num:121
odd 1APPLEs-MacBook-Air:C 
*/
