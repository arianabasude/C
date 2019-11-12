
// reading  record from file using fscanf

#include<stdio.h>
#include<stdlib.h>

struct Student
{
	int roll;
	char name[40];
	
};

int main(){
	
	struct Student s;
	FILE *fp;
	fp=fopen("a","rb");


	while(!feof(fp)){

		//printf("\nroll and name: ");
		fscanf(fp,"%d%s",&s.roll,s.name);
		printf("%d %s\n",s.roll,s.name);
		

	}

	
	return 10;
}
/*
APPLEs-MacBook-Air:C newmac$ gcc record_fscanf.c
APPLEs-MacBook-Air:C newmac$ ./a.out
3 a
APPLEs-MacBook-Air:C newmac$ 


$APPLEs-MacBook-Air:C newmac$ cat a
1  a
2  a
3  a


*/