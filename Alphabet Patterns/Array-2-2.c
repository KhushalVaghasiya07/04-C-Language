#include<stdio.h>

main()

{
	int row,col;
	
	printf("Enter the Array's Row size : ");
	scanf("%d",&row);
	printf("Enter the Array's Column size : ");
	scanf("%d",&col);
	
	printf("\n");
	printf("Enter 1st Array's element : ");
	printf("\n");
	printf("\n");
	
	int a[row][col];
	int b[row][col];
	int i,j;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Enter 2nd Array's element : ");
	printf("\n\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	printf("Your 1st Array's Output is : ");
	printf("\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Your 2nd Array's Output is : ");
	printf("\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	int sum[i][j];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
		printf("\n");
	}

	printf("Your Array's some is Here : ");
		for(j=0;j<col;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}