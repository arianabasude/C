#include<stdio.h>
int main()
{
	int n,i,j,count;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{   count=65;
		for(j=1;j<=2*n-1;j++)
		{
			if(i+j>n+1 && j<n+i-1)
				printf(" ");
			else if(j<=n)
			{
				printf("%c",count);
				count++;
			}
			else if(i==1)
			{	count--;
				printf("%c",count-1);
			}
			else
			{
				count--;
				printf("%c",count);
			}

		}
		printf("\n");
	}
}