#include "stdio.h"

main(){

	int i;
	for( i = 10 ; i > 1 ; i = i - 3 ){
		printf("A");
	}
	printf("\nI is %d", i);
	
	getch();
}
