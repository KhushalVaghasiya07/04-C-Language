#include<stdio.h>

main()
{
	int maths,eng,sci;
	float avg;
	
	printf("Enter your Maths marks = ");
	scanf("%d",&maths);
	printf("Enter your eng marks = ");
	scanf("%d",&eng);
	printf("Enter your sci marks = ");
	scanf("%d",&sci);
	
	avg=(maths+eng+sci)/3;
	
	
	printf("Your Avrage is = %f",avg);
	
}