#include "stdio.h"

#define line printf("===============================\n");
main(){
	int bus_number;
	line
	printf(" Program Bus Information\n");
	line
	printf(" Please enter bus munber : ");
	scanf( "%d", &bus_number );
	line
	switch( bus_number ){
		case 57 : printf(" Go Pinklao\n");
				  break;
		case 3 :  printf(" Go Sanam Lao\n");
				  break;
		case 71 : printf(" Go Hua Lum Pong\n");
				  break;
		case 56 : printf(" Go Banglumpoo\n");
				  break;
		case 539 :printf(" Go Victory moment\n");
		default : printf(" Do not have data\n");	
	}
	line
	getch();
}
