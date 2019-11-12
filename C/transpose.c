#include<stdio.h>

void new(int *m,int row,int col){
	int i,j;
	printf("enter %d numberssss:",row*col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",m+i*col+j);
		}
	}
}

void transpose(int *m,int row,int col){
	int i,j;
	int ans[col][row];

	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			ans[j][i]=*(m+i*col+j);
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}



}



int main(){
	
	int m[][2]={0};
	
	int i,j;
	new(m,2,2);
	printf("Transpose:\n");
	transpose(m,2,2);


	//print
	// for(i=0;i<2;i++){
	// 	for(j=0;j<2;j++){
	// 		printf("%d ",m[i][j]);
	// 	}
	// 	printf("\n");
	// }


	return 10;
}

/*


*/