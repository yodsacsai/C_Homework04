#include "stdio.h"

main(){
	int i = 10;
	
	while( i > 1 ){
		printf("A");
		i = i - 3;
	}
	
	printf("\nI is %d", i);
	
	getch();
}
