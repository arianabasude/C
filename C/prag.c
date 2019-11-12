
// Pragma 
// no pragma 

#include<stdio.h>

void begin();
void end();	
	

void __attribute__((constructor)) begin();  
void __attribute__((destructor)) end(); 


int main(){

	printf("In main\n");

	return 10;
}

void begin(){
	printf("Begin......\n");
}
void end(){
	printf("end........\n");
}


/*



*/