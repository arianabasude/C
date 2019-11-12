
// writing  poem into file using strings.

#include<stdio.h>
#include<stdlib.h>
int main(){
	
	char s[200];
	FILE *fp;
	fp=fopen("a.txt","w");
	while(strcmp(s,"$")){
		gets(s);
		fputs(s,fp);
		fputs("\n",fp);
	}
	
	return 10;
}
/*
asdasd
asfsdgfsdg
sdfbvdfbfg
csdfdrfhgbdc
$
APPLEs-MacBook-Air:C newmac$ cat a.txt
asdasd
asfsdgfsdg
sdfbvdfbfg
csdfdrfhgbdc
$
APPLEs-MacBook-Air:C newmac$ 
*/