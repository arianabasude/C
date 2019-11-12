
// conditional complilation

#include<stdio.h>
#include<stdlib.h>

#define GAURAV_VERSION3 29



int main(){
	#if GAURAV_VERSION1
			printf("Gaurav version 1 is with you.");
	#elif GAURAV_VERSION2
			printf("Gaurav version 2 is with you.");
	#elif GAURAV_VERSION3
			printf("Original Gaurav is here.\n");
	#elif GAURAV_VERSION4
			printf("Dancing Gaurav!!!!");
	#else
			printf("opppppppppsssss!!!");
	#endif
	return 10;
}
/*



*/