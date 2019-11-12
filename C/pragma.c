
// Pragma 
//ye nahi karta work
//dhoka

#include<stdio.h>

void begin();
void end();	
	
# pragma startup begin
# pragma exit end


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