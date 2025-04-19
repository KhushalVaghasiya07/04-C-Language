#include<stdio.h>


main()
{
	int N;
	
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujrati\n");
	printf("\n");
	
	printf("Plz Enter your Choice : ");
	scanf("%d",&N);
	printf("\n");
	
	
	switch(N)
	{
		case 1:
			printf("Press 1 for Internet Recharge\n");
			printf("Press 2 for Top-up Recharge\n");
			printf("Press 3 for Special Recharge\n");
			printf("\n");
			
			printf("Plz select Any one recharge type : ");
			scanf("%d",&N);
			printf("\n");
			
	
			switch(N)
			{
				case 1:
					printf("You have successfully done a Internet Recharge");
					break;
				case 2:
					printf("You have successfully done a Top-up Recharge");
					break;
				case 3:
					printf("You have successfully done a Special Recharge");
					break;
			}
			
			break;
		case 2:
			printf("Internet recharge ke liye 1 dabaiye\n");
			printf("Top-up Recharge ke liye 2 dabaiye\n");
			printf("Special Recharge ke liye 3 dabaiye\n");
			printf("\n");
			
			printf("Koi bhi ak number Chuniye : ");
			scanf("%d",&N);
			printf("\n");
			
	
			switch(N)
			{
				case 1:
					printf("You have successfully done a Internet Recharge");
					break;
				case 2:
					printf("You have successfully done a Top-up Recharge");
					break;
				case 3:
					printf("You have successfully done a Special Recharge");
					break;
			}
			
			break;
		case 3:
			printf("Internet Recharge mate 1 dabavo\n");
			printf("Top-up Recharge mate 2 dabavo\n");
			printf("Special Recharge mate 3 dabavo\n");
			printf("\n");
			
			printf("Plz select Any one recharge type : ");
			scanf("%d",&N);
			printf("\n");
			
	
			switch(N)
			{
				case 1:
					printf("Tamaru Internet Recharge Safltapurvak thai gayu che");
					break;
				case 2:
					printf("Tamaru Top-Up Recharge Safltapurvak thai gayu che");
					break;
				case 3:
					printf("Tamaru Special Recharge Safltapurvak thai gayu che");
			
					break;
			}
			
			break;
		default:
			printf("Plz Enter Valid Choice");
	}
	
}