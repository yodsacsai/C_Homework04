#include "stdio.h"

main(){
	int x = 10;
	
	if( x < 5){
		printf("A");
	}else if( x < 7){
		printf("B");
	}else if( x <= 10){
		printf("C");
	}else if( x < 20){
		printf("D");
	}else{
		printf("E");
	}
	printf("F");
	
	getch();
}
