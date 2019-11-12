#include<stdio.h>
int main(){
	int num,r[10],i=1,j,re;
	printf("Enter Decimal: and to conversion");
	scanf("%d",&num);

	while(num!=0){
		re=num%16;
		if(re==10){
			r[i]=65;
		}
		else if(re==11)
			r[i]=66;
		else if(re==12)
			r[i]=67;
		else if(re==13)
			r[i]=68;
		else if(re==14)
			r[i]=69;
		else if(re==15)
			r[i]=70;
		else{
			r[i]=re;
		}
		num=num/16;
		i++;

	}
	for(j=i-1;j>0;j--){
		if(r[j]<10){
			printf("%d",r[j]);
		}
		else{
			printf("%c",r[j]);
		}
		
	}
	return 10;
}