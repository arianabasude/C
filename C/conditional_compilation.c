
// conditional complilation

#include<stdio.h>
#include<stdlib.h>

#define GAURAV_VERSION 3

int main(){
	#if GAURAV_VERSION == 1
			printf("Gaurav version 1 is with you.");
	#elif GAURAV_VERSION == 2
			printf("Gaurav version 2 is with you.");
	#elif GAURAV_VERSION == 3
			printf("Original Gaurav is here");
	#elif GAURAV_VERSION == 4
			printf("Dancing Gaurav!!!!");
	#else
			printf("opppppppppsssss!!!");
	#endif
	return 10;
}
/*



*/