
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
		//fscanf(fp,"%d%s",&s.roll,s.name);
		fread(&s,sizeof(s),1,fp);
		printf("%d %s\n",s.roll,s.name);
		

	}

	
	return 10;
}
/*
APPLEs-MacBook-Air:C newmac$ gcc record_fread.c
APPLEs-MacBook-Air:C newmac$ ./a.out
1 a
2 Gayatri
3 Gaurav
3 Akhtar
3 Akhtar


*/