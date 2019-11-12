#include<stdio.h>
int main(){
	int rad;
	float area,cur,pi=3.14;

	printf("Enter Radius:");
	scanf("%d",&rad);
	area=pi*rad*rad;
	cur=2*pi*rad;
	printf("Area and Cur is %.3f %.3f",area,cur);

}