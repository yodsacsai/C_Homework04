#include "stdio.h"

main(){
	int x = 5;
	
	if( x < 8 + 5 * 2 % 3 ){
		printf("A");
	}else{
		printf("B");
	}
	
	printf("C");
	
	getch();
}
