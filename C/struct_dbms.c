#include<stdio.h>
#include<math.h>

struct student
{
	int roll;
	char name[30]; 
};

void read(struct student stud[],int size){
	printf("%s\t%s","Roll","Name\n");
	for(int i=0;i<size;i++){
		printf("%d\t%s\n",stud[i].roll,stud[i].name);
	}
}

void add(struct student s[],int size){
	for(int i=0;i<size;i++){
		printf("roll and name for student %d: ",i+1);
		scanf("%d%s",&s[i].roll,s[i].name);
	}
}

/*
void search(struct student s[],int size,int roll_search){
	for(int i=0;i<size;i++){
		if(s[i].roll==roll_search){
			printf("name of roll %d is %s",roll_search,s[i].name);
		}
		else{
			printf("no roll num found");
		}
	}
}
*/


struct student search1(struct student s[],int size,int roll_search){
	struct student student_null={0};
	for(int i=0;i<size;i++){
		if(s[i].roll==roll_search){
			student_null=s[i];
			break;
		}
	
	}
	return student_null;
}
 


int main(){
	struct student s[20];
	struct student sample;
	int size,i,roll_num;
	printf("enter number of bacchalog in your class");
	scanf("%d",&size);
	add(s,size);
	read(s,size);

	printf("enter roll num:");
	scanf("%d",&roll_num);
	sample=search1(s,size,roll_num);
	if(sample.roll!=0){
		printf("name: %s",sample.name);
	}
	else{
		printf("no student");
	}
	

	return 10;}


/*


APPLEs-MacBook-Air:C newmac$ gcc struct_dbms.c
APPLEs-MacBook-Air:C newmac$ ./a.out
enter number of bacchalog in your class2
roll and name for student 1: 1 abcdef
roll and name for student 2: 2 asdddeeewww
Roll	Name
1	abcdef
2	asdddeeewww
enter roll num:2
name: asdddeeewwwAPPLEs-MacBook-Air:C newmac$ gcc struct_dbms.c
APPLEs-MacBook-Air:C newmac$ ./a.out
enter number of bacchalog in your class2
roll and name for student 1: 1 dfsd
roll and name for student 2: 2 sdfds
Roll	Name
1	dfsd
2	sdfds
enter roll num:4
no studentAPPLEs-MacBook-Air:C newmac$ 

*/
	