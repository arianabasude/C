#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,*arr,*burst,i,*comp,*turn,*wait;
	float avgwait=0,avgturn=0;
	printf("Enter the number of processes:");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	burst=(int*)malloc(n*sizeof(int));
	comp=(int*)malloc(n*sizeof(int));
	turn=(int*)malloc(n*sizeof(int));
	wait=(int*)malloc(n*sizeof(int));

	printf("Enter Arrival Time and Burst Time of respective processes\n");
	for(i=0; i<n; i++){
		scanf("%d %d",arr + i, burst + i);
	}

	
	for (i = 0; i <n ; i++)
	{
		if(i>0)
		{
			if(comp[i-1]<arr[i])
				comp[i]=burst[i]+comp[i-1]+(arr[i]-comp[i-1]);
			else
				comp[i]=burst[i]+comp[i-1];
		}
		else
			comp[i]=burst[i];

		turn[i]=comp[i]-arr[i];
		wait[i]=turn[i]-burst[i];
		avgturn+=turn[i];
		avgwait+=wait[i];
		printf("\nFor process %d\n",i);
		printf("Finish time:%d \n",comp[i]);
		printf("Turnaround time:%d \n",turn[i]);
		printf("Waiting time:%d \n",wait[i]);
	}
		printf("Average turnaround time:%f \n",avgturn/n);
		printf("Average waiting time:%f \n",avgwait/n);
	
	








	return 10;
}