#include<stdio.h>
#include<stdlib.h>

struct Student{
	int roll;
	char name[50]; 
};

int main(){
	FILE *fp,*new_fp;
	char another,choice;
	struct Student s;
	int user_roll;
	long int recsize;

	fp=fopen("dbms","rb+");
	if(fp==NULL){
		fp=fopen("dbms","wb+");
		if(fp==NULL){
			printf("Cannot open");
			exit(20);
		}
	}

	recsize=sizeof(s);
	while(1){

		printf ( "1. Add Records\n" ); 
		printf ( "2. List Records\n" ); 
		printf ( "3. Modify Records\n" ); 
		printf ( "4. Delete Records\n" ); 
		printf ( "0. Exit" );
		printf ( "Your choice" ) ;

		scanf(" %c",&choice);

	//}
	switch(choice){
		case '1':
			fseek(fp,0,SEEK_END);
			another='Y';
			while(another=='Y'){
				printf ( "\nEnter roll and name: " ) ; 
				scanf ( "%d %s", &s.roll,s.name) ; 
				fwrite ( &s, recsize, 1, fp ) ;
				printf ( "\nAdd another Record (Y/N) " ) ;
				scanf(" %c",&another);
			}
			break;
		case '2':
			rewind(fp);
			while(!feof(fp)){
				fread(&s,recsize,1,fp);
				printf("%d\t%s",s.roll,s.name);
			}
			break;

			// new_fp=fopen("new_dbms","rb");
			// rewind(new_fp);
			// while(!feof(new_fp)){
			// 	fread(&s,recsize,1,new_fp);
			// 	printf("%d\t%s\n",s.roll,s.name);
			// }
			break;

		case '3':
			printf("Enter roll number:");
			scanf("%d",&user_roll);
			rewind(fp);

			while(!feof(fp)){
				fread(&s,recsize,1,fp);
				if(s.roll==user_roll){
					printf("Enter new roll and name:");
					scanf("%d%s",&s.roll,s.name);
					fseek(fp,-recsize,SEEK_CUR);
					fwrite(&s,recsize,1,fp);
					break;
				}
			}
			break;

		case '4':
			printf("Enter roll number:");
			scanf("%d",&user_roll);
			rewind(fp);
			new_fp=fopen("new_dbms","wb");

			while(!feof(fp)){
				fread(&s,recsize,1,fp);
				if(s.roll!=user_roll){
					fwrite(&s,recsize,1,new_fp);
				}

			}
			fclose(new_fp);
			break;
			
	}

	//while wala
	}


	return 10;


}