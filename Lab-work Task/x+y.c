#include<stdio.h>

main()

{
	int x,y,xy;
	
	printf("Enter the value of X = ");
	scanf("%d",&x);
	printf("Enter the value of Y = ");
	scanf("%d",&y);
	
	xy=(x*x)+(2*x*y)+(y*y);
	
	printf("your xy is = %d",xy);
}