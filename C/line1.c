#include<stdio.h>
int main(){
	FILE *fp;
	char s[50];
	fp=fopen("text.txt","r");
	while(!feof(fp)){
		fgets(s,20,fp);
		printf("%s",s);

	}

	return 10;
}