#include<stdio.h>

main()
{
	int number;
	
	printf("/\\ Welcome to Vicky Cinema /\\ \n\n");
	
	printf("Which type of movie do you like : \n");
	printf("1.Bollywood\n");
	printf("2.Tollywood\n");
	printf("3.Hollywood\n\n");
	
	printf("Plz can you select any one : ");
	scanf("%d",&number);
	
	switch(number)
	{
		case 1:
			switch(number)
			{
				printf("Which type do you like to watch : ");
				scanf("%d",&number);
				printf("Your selected type is Bollywood ");
						pritnf("1.Comedy\n");
						printf("2.Romantic\n");
						printf("3.Horror\n");
						printf("4.Action\n");		
				
				case 1:
					
						
						
						
			
			break;
		case 2:
			printf("Your selected type is Tollywood ");
			break;
		case 3:
			printf("Your selected type is Hollywood ");
			break;
		default:
			printf("Plz Select Valid choice");
				
	
	}
}
}