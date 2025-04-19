#include<stdio.h>

main()
{
	int n;
	printf("Enter any number = ");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("Your value is negative");
	}
	else if(n==0)
	{
		printf("Your value is neutral");
	}
	else if(n>0)
	{
		printf("Your value is possitive");
	}
}