#include<stdio.h>
int main(){
	float n,x,sum=1,current,fact=1;
	int i;
	
	printf("Enter n and x:");
	scanf("%f %f",&n,&x);
	current=x;
	sum+=current;
	printf("%.1f\n",current);
	for(i=2;i<=n;i++){
		fact=(fact+1)*(i)*(i-1);
		printf("%.1d :i\n",i );

		current=current*x*(-1)*x;

		sum+=current/fact;
		if(i%2!=0){
			printf("+%.1f/%.1f\t",current,fact);
			
		}
		else{
			printf("%.1f/%.1f\t",current,fact);

		}
	
		
		

	}
	printf("\nSum: %.1f",sum);
	return 10;	

}