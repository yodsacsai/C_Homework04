#include"stdio.h"
#define line printf("**********************************\n");
main(){
	double wi,lo,area;
	int a;
	line
	printf("      Program Square Area\n");
	line
	a = 1;
	while( a <= 3 ){
		printf("No.%d\n",a);
		printf("Enter widths : ");
		scanf("%lf",&wi);
		printf("Enter longs : ");
		scanf("%lf",&lo);
		area = wi * lo;
		printf("Area square is : %.2lf\n",area);
		printf("\n\n");
		
		a = a + 1;
	}
	line
	
	
	
	getch();
}
