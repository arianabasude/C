#include<stdio.h>
int main(){
	
	int num1,num2,num3;
	printf("%s\n","Enter three nums:" );
	scanf("%d %d %d",&num1, &num2, &num3);
	if(num1>num2 && num1>num3){
		printf("%s %d\n","Greatest is:",num1 );
	}
	else if(num2>num1 && num2>num3){
		printf("%s %d\n","Greatest is:",num2 );
	}
	else{
		printf("%s %d\n","Greatest is:",num3 );
	}
	


}