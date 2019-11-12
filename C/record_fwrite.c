
// writing record into file using fwrite

#include<stdio.h>
#include<stdlib.h>

struct Student
{
	int roll;
	char name[40];

	
};

int main(){
	
	struct Student s;
	int n,i;
	FILE *fp;
	fp=fopen("a","wb");


	printf("How many records you want to write:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nenter roll and name for %d: ",i+1);
		scanf("%d%s",&s.roll,s.name);
		fwrite(&s,sizeof(s),1,fp);
	}
	

	
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