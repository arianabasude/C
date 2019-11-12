#include<stdio.h>
int main(){
	unsigned int n,x,i,sum=1,current=1,fact=1;;
	
	printf("Enter n and x:");
	scanf("%d %d",&n,&x);
	printf("1");
	for(i=1;i<n;i++){
		
		fact=fact*i;
		current=current*x*(-1);
		if(i%2!=0){
			
			printf("%d/%d",current,fact);
			
		}
		else{
			
			printf("+%d/%d",current,fact);

		}
	
		
		sum+=current/fact;

	}
	printf("\nSum: %d",sum);
	return 10;	

}