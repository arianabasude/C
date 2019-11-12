#include<stdio.h>
int main(){
	
	int marks[5],i;
	int total=0;
	float per;
	printf("%s\n","Enter marks of 5 subjects" );
	for(i=0;i<5;i++){
		scanf("%d",&marks[i]);
		total+=marks[i];
	}
	printf("%s : %d\n","Total",total );
	per=(total*100)/500;
	printf("%s : %.2f\n","Percetange",per);


}