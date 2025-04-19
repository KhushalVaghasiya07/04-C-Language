#include<stdio.h>

/*
0
0 1
0 1 0
0 1 0 1
0 1 0 1 0
*/
main()
{
	
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j%2==0);
		}
		printf("\n");
	}
}