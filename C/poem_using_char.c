
// writing  poem into file using char

#include<stdio.h>
#include<stdlib.h>
int main(){
	
	char c;
	FILE *fp;
	fp=fopen("a.txt","w");
	while(c!='$'){
		c=getchar();
		fputc(c,fp);
		
	}
	
	return 10;
}
/*
APPLEs-MacBook-Air:C newmac$ gcc poem_using_char.c
APPLEs-MacBook-Air:C newmac$ ./a.out
ssdsjbf
fsdgfdsg
sfbsdbvsds
$
APPLEs-MacBook-Air:C newmac$ cat a.txt
ssdsjbf
fsdgfdsg
sfbsdbvsds
$APPLEs-MacBook-Air:C newmac$ 

*/