#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char ch;
	fp=fopen("a.txt","r");
	if(fp==NULL){
		printf("File does exist");
		exit(0);
	}
	while(!feof(fp)){
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	return 10;
}