#include<stdio.h>

/*
    1
   22
  333
 4444
55555  	
*/
main()
{
	
	int i,j,s;
	
	for(i=1;i<=5;i++)
	{
		for(s=5;s>i;s--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",i); 
		}
		printf("\n");
	}
}