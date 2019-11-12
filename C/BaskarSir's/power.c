#include<stdio.h>
int main(){
	int x,y,i,ans=1;
	printf("Enter x and y:");
	scanf("%d %d",&x,&y);
	
	for(i=1;i<=y;i++){
		ans=ans*x;

	}
	printf("Ans:%d\n",ans);
}
/*
Enter x and y:2 3
Ans:8
*/