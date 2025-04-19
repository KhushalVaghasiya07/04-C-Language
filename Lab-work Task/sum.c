#include<stdio.h>

main()
{
	int	i,n,sum;
	
	pritnf("Enter Any number = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum + i;	
	}
	printf("All number of sum = %d",sum);
}