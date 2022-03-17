#include"stdio.h"
#define line printf("**************************\n");
main(){
	int number;
	
	line
	printf("        Bingo Game\n");
	line
	
	do{
		printf("Enter number : "); scanf("%d",&number);
		if( number == 43 ){
			printf("You are the WINER\n");
		}else{
			printf("Sorry, enter number again...\n\n");
		}
	}while( number != 43 );
	line
		
	
	
	
	
	getch();
}
