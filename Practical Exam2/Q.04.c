#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

   
    printf("Enter numbers: ");
    scanf("%d", &num1);
    
    
    printf("Enter numbers: ");
    scanf("%d",&num2);
    
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  

   
    switch(operator) {
        case '+':
        	
            result = num1 + num2;
            printf("Result: %d\n", result);
            
            break;
        case '-':
        	
            result = num1 - num2;
            printf("Result: %d\n", result);
            
            break;
        case '*':
        	
            result = num1 * num2;
            printf("Result: %d\n", result);
            
            break;
        case '/':
        	
            if (num2 != 0) 
			{
                result = num1 / num2;
                printf("Result: %d\n", result);
            } else
			 {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

