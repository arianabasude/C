#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char s[200];
	fp=fopen("a.txt","w");
	while(!strcmp(s,"$")){
		gets(s);
		fputs(s,fp);
	}
	
	fclose(fp);
	return 10;
}