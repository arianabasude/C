#include<stdio.h>
#include<string.h>
int main(){
	enum member{
		Gayatri=18,
		Ruchika=12,
		Mani=11,
		Jyoti=19,
		Reema=20
	};
	struct student{
		char name[40];
		enum member room_num;

	};

	struct student s;
	printf("Enter student name and room num:");
	scanf("%s%d",s.name,&s.room_num);
	

	if(s.room_num==Gayatri){
		printf("%s is in Gayatri's room\n",s.name);
	}
	else{
		printf("%s is not in Gayatri's room\n",s.name);
	}
	return 10;
}

/*

APPLEs-MacBook-Air:C newmac$ gcc enum1.c
APPLEs-MacBook-Air:C newmac$ ./a.out
Enter student name and room num:Akhtar 18
Akhtar is in Gayatri's room



Enter student name and room num:Pratibha 19
Pratibha is not in Gayatri's room
*/