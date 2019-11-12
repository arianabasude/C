#include<stdio.h>
int main(){
	unsigned int digit,count=0;
	printf("%s\n","Enter digit:");
	scanf("%d",&digit);
	while(digit!=0){
		digit=digit/10;
		count++;
	}
	printf("%s:%d\n","Count",count );

	return 10;	

}