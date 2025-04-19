#include<stdio.h>

main()
{
	int x,y,xy;
	
	printf("Enter the Value of X = ");
	scanf("%d",&x);
	printf("Enter the Value of Y = ");
	scanf("%d",&y);
	
	xy=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
	
	printf("Your Answer is = %d",xy);
}