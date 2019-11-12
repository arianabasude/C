#include<stdio.h>
#include<string.h>


void display(int *n,char * s){
	printf("display: %d\t%s",*n,s);
}


struct St{
	int roll;
	char name[60];
}s1,s2;

int main(){
	
	s1.roll=34;
	strcpy(s1.name,"sdjsahdc");
	

	s2=s1;
	

	display(&s1.roll,s1.name);
	return 10;

}