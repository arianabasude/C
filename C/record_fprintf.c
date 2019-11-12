
// writing  record into file using fprintf 

#include<stdio.h>
#include<stdlib.h>

struct Student
{
	int roll;
	char name[40];
	
};

int main(){
	
	struct Student s;
	char choice='y';
	FILE *fp;
	fp=fopen("a","wb");


	while(choice!='n'){

		printf("enter roll and name");
		scanf("%d%s",&s.roll,s.name);
		fprintf(fp,"%d  %s\n",s.roll,s.name);
		
		puts("do you want to add more (y/n)");
		scanf(" %c",&choice);
		
	}
	
	return 10;
}
/*
APPLEs-MacBook-Air:C newmac$ gcc record_fprintf.c
APPLEs-MacBook-Air:C newmac$ ./a.out
enter roll and name1 asdasd
do you want to add more (y/n)
y
enter roll and name2 fsa
do you want to add more (y/n)
n
APPLEs-MacBook-Air:C newmac$ cat a
1  asdasd
2  fsa



*/