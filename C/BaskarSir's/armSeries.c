#include<stdio.h>
#include<math.h>
int main(){
	int i,temp,ans,arm,length,r,j;
	
	
	for(i=1;i<=200;i++){
		temp=i;
		length=0;
		arm=0;
		ans=1;
		while(temp!=0){
			temp=temp/10;
			length++;
			
		}
		//printf("%d\n",length);
		temp=i;
		//printf("%d",temp);
		
		while(temp!=0){
			r=temp%10;
			arm=arm+pow(r,length);
			// for(i=1;i<=length;i++){
			// 	ans=ans*r;
			// }
			// arm=arm+ans;

			temp=temp/10;

		}

		if(arm==i)
			printf("arm:%d\n",i);

	}


	return 10;}
	
/*
Enter num34
Sum:7
*/