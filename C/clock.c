#include<stdio.h>
int main(){
	int h,m;
	float angle;
	printf("Enter h and m:");
	scanf("%d %d",&h,&m);
	
	if(h==12){
		angle=m*6-m*0.5;

	}
	else
		angle=m*6+m*0.5-h*30;

	printf("%.3f",angle);

	return 10;

}