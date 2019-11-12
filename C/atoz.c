#include<stdio.h>
int main(){
	char userChar,ans;
	printf("Enter character:");
	scanf("%c",&userChar);
	if(userChar>='A' && userChar<='Z'){
			printf("entered char:%d\nOperation:%d+ %d - %d",userChar,userChar,'a','A');
			ans=userChar+'a'-'A';
			
	}
	else if(userChar>='a' && userChar<='z'){
			printf("entered char:%d\nOperation:%d-(%d - %d)",userChar,userChar,'a','A');
			ans=userChar-('a'-'A');
			
	}
	printf("\nOutput: Char: %c\n",ans);
	return 10;	

}