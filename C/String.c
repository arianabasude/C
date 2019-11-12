#include<stdio.h>
#include<string.h>
int main(){
	char str1[]="helllllllo";
	char str2[]="hellll";
	char str3[20];

	printf("%s\n",str1 ); //helllllllo
	printf("%s\n", strcpy(str3,str2)); //hellll
	printf("%s\n",str3 );//hellll
	printf("%s\n", strcpy(str3,str1)); //helllllllo
	printf("%ld\n",strlen(str3)); //10
	return 0;
}