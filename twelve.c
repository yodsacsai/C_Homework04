#include"stdio.h"
#define line printf("****************************\n");
main(){
	int num_one,num_two,total;
	
	line
	printf("Program Sum Number\n");
	line
	
	do{
		printf("Enter number 1 : "); scanf("%d",&num_one);
		printf("Enter number 2 : "); scanf("%d",&num_two);
		total = num_one + num_two;
		printf("Total is : %d \n",total);
		if(total < 500){
			printf("Enter number again...\n\n");
		}
	}while( total < 500 );
	line
	getch();
}
