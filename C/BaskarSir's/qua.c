#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	float root1,root2;
	printf("Enter a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0){
		root1=(-b+sqrt(d))/2*a;
		root2=(-b-sqrt(d))/2*a;
		printf("%.2f %.2f are roots",root1,root2);
	}
	else if(d==0){
		root1=(-b+sqrt(d))/2*a;
		printf("%.2f is root",root1);
	}
	else{
		printf(" no roots");
	}
	

	return 10;
}