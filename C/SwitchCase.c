#include<stdio.h>
int main(){
	int marks=82;
	switch(marks){
	case 90:
		printf("%s\n","Excellence" );
		break;
	case 80:
		printf("%s\n","Good" );
		break;
	case 70:
		printf("%s\n","Okay" );
		break;
	case 60:
		printf("%s\n","Passed" );
		break;
	case 40:
		printf("%s\n","Failed" );
		break;
	default:
		printf("%s\n","No Options" );
	return 0;}}

