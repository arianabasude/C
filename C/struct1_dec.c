#include<stdio.h>
#include<string.h>

struct address
{
	int room;
	char area[40];
	
};

struct St{
	int roll;
	char name[60];
	struct address a;
}s1,s2;

int main(){
	
	s1.roll=34;
	strcpy(s1.name,"sdjsahdc");
	s1.a.room=23;
	strcpy(s1.a.area,"area");

	s2=s1;
	

	printf("%d\t%s %s",s2.roll,s2.name,s2.a.area);

	printf("%d\t%s",s1.roll,s1.name);
	return 10;

}