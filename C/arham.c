#include<stdio.h>
#include<string.h>
int main(){
	FILE *fp;
	char s[30];
	fp=fopen("text.txt","w");
	while(strcmp(s,"$"))
	{
		gets(s);
		fputs(s,fp);
		fputs("\n",fp);
	}

	fclose(fp);
	return 10;
}