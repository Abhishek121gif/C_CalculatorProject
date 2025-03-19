#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    
    // Display menu
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    // Taking input for numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    // Switch case for operations
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }
    
    return 0;
}