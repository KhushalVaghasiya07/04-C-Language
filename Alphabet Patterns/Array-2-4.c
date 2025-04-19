#include<stdio.h>

main()
{
	int row,col;
	
	
	printf("Enter The row of Array's : ");
	scanf("%d",&row);
	printf("Enter The column of Array's : ");
	scanf("%d",&col);
	
	int i,j;
	int a[row][col];
	printf("\n\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}	
		printf("\n");
	}
	
	printf("Array's output is Here : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}	
		printf("\n");
	}
	
	printf("\n");
	printf("Your Boundary Element is Here : \n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==0 || j==0 || i==(row-1) || j==(row-1))
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("  ");
			}
		}	
		printf("\n");
	}
		
}