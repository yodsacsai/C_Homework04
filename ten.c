#include"stdio.h"
#define line printf("*****************************\n");
main(){
	int mid,fi,re,id;
	char name[50];
	
	line
	printf("    Program Result Exam\n");
	line
	
	printf(" Enter id : ");
	scanf("%d",&id);
	
	while( id != 0){
		printf(" Enter name : "); scanf("%s",&name);
		printf(" Enter Midterm : "); scanf("%d",&mid);
		printf(" Enter Final : "); scanf("%d",&fi);
		re = mid + fi;
		if(re>=50){
			printf(" PASS...\n\n");
		}else{
			printf(" NOT PASS...\n\n");
		}
		printf(" Enter id : ");
		scanf("%d",&id);
	}
	line
	
	
	
	getch();
}
