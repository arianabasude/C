
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
		//fprintf(fp,"%d  %s\n",s.roll,s.name);
		fwrite(&s,sizeof(s),1,fp);
		
		fflush(stdin);

		puts("do you want to add more (y/n)");
		scanf(" %c",&choice);
		
	}
	
	return 10;
}
/*
APPLEs-MacBook-Air:C newmac$ gcc record_fscanf.c
APPLEs-MacBook-Air:C newmac$ ./a.out
1 asdasd
2 fsa
2 fsa


*/