#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,i,j,flag;
	printf("Enter two numbers: ");
	scanf("%d %d",&n1,&n2);
	for(i=n1;i<=n2;i++){
		flag=0;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag=1;
			}
			
		}
		if(flag==0){
			printf("%d ",i);
		}
	}
	
	return 10;
}