#include<stdio.h>

/*
    5
   54
  543
 5432
54321  	
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
		for(j=5;j>=i;j--)
		{
			printf(" %d",j); 
		}
		printf("\n");
	}
}