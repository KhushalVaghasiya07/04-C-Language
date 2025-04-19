#include <stdio.h>

void additional();
void subtract();
void multiply();
void divide();
void modulus();

void additional()
{
    int a, b;
    printf("Enter two numbers to add: ");
    scanf("%d %d", &a, &b);
    
    printf("Answer: %d + %d = %d\n", a, b, a + b);
}

void subtract()
{
    int a, b;
    printf("Enter two numbers to subtract: ");
    scanf("%d %d", &a, &b);
    
    printf("Answer: %d - %d = %d\n", a, b, a - b);
}

void multiply()
{
    int a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &a, &b);
    
    printf("Answer: %d * %d = %d\n", a, b, a * b);
}

void divide()
{
    int a, b;
    printf("Enter two numbers to divide: ");
    scanf("%d %d", &a, &b);
    
	if (b != 0)
	{
        printf("Answer: %d / %d = %.2f\n", a, b, (float)a / b);
    } 
	else 
	{
        printf("Division by zero is not allowed!\n");
    }
}

void modulus()
{
    int a, b;
    printf("Enter two numbers to find modulus: ");
    scanf("%d %d", &a, &b);
    if (b != 0) 
	{
        printf("Answer: %d %% %d = %d\n", a, b, a % b);
    } 
	else
	{
        printf("Error: Division by zero is not allowed!\n");
    }
}

int main() 
{
    char choice;
    
    do{
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("0. Quit\n");
        
        printf("Enter your choice: ");
        scanf(" %c", &choice);  
        
        switch(choice)
		{
            case '1':
                additional();
                break;
                
            case '2':
                subtract();
                break;
                
            case '3':
                multiply();
                break;
                
            case '4':
                divide();
                break;
                
            case '5':
                modulus();
                break;
                
            case '0':
                printf("Exiting the program \n");
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != '0'); 

//    return 0;-
}
