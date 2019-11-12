#include<stdio.h>
int main(){
	int time;
	float pri,rate,simple;

	printf("Enter Principle Rate and time:");
	scanf("%f %f %d",&pri,&rate,&time);
	simple=(pri*rate*time)/100;
	printf("Simple Interest is %.3f",simple);

}