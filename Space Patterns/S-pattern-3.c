#include<stdio.h>

/*
    5
   45
  345
 2345
12345  	
*/
main()
{
	
	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=i;s>1;s--)
		{
			printf("  ");
		}
		for(j=i;j<=5;j++)
		{
			printf(" %d",j); 
		}
		printf("\n");
	}
}