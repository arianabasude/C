#include<stdio.h>
int main()
{
	int i,j,n,temp,flag,count=1,arr[20];
	printf("Enter the number: ");
	scanf("%d",&n);
	temp=n;
	abc: for(i=2;i<=temp/2;i++)
	{
	  flag=0;
	 for(j=1;j<=temp;j++)
	 {
	   if(n%i==0)
	   flag+=1;
	 }
	 if(flag==2)
	 {a
	   while(n>1)
	  {
	    if(n%i==0)
	   {
	     n=n/i;
	     arr[count]=i;
	     count++;
	   }
	   else 
	    goto abc;
	  }
	 }

	 }
	
	for(i=1;i<count;i++)
	{
	 if(i==(count-1))
	  printf(" %d",arr[count]);
	  else
	  printf(" %d x",arr[count]);
	  
	}
	return 0;
}