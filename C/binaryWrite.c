#include<stdio.h>
#include<stdlib.h>
int main(){
	//binary files
	char s[20];
	FILE *fp;
	fp=fopen("a","wb");
	gets(s);
	fput(s,fp);
	
	return 10;
}