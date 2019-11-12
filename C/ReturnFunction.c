#include<stdio.h>
//void myFunc();
int myFunc(int a){
	printf("%s %d\n","yesss it is",a );
	return a;
}
int main(){
	int returned_a;
	returned_a=myFunc(23);
	printf("%s %d", "returned",returned_a);
	
	return 0;}
