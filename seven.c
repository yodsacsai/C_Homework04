#include "stdio.h"

main(){
	int i = 10;
	
	do{
		printf("A");
		i = i - 3;
	}while( i > 1 );
	
	printf("\nI is %d", i);
	
	getch();
}
