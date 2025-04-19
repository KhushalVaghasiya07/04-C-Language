#include<stdio.h>

/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
main()
{
	
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf("%d ",j%2==1);
		}
		printf("\n");
	}
}