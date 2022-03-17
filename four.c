#include "stdio.h"

main(){
	int x = 20;
	switch(x){
		case 10 :  printf("A");
				   break;
		case 5 :   printf("B");
				   break;
		case 20 :  printf("C");
				   printf("D");
		           break;
		case 500 : printf("E");
				   break;
		default :  printf("F");
				   printf("G");
	}
	
	
	getch();
}
