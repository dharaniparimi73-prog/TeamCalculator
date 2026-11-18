#include <stdio.h>
#include "calculator.h"

int main()
{
    double a, b;
    int choice;

    printf("\n--- TEAM CALCULATOR ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch(choice)
    {
        case 1:
            printf("Result = %.2lf", add(a,b));
            break;

        case 2:
            printf("Result = %.2lf", subtract(a,b));
            break;

        case 3:
            printf("Result = %.2lf", multiply(a,b));
            break;

        case 4:
            if(b == 0)
                printf("Cannot divide by zero");
            else
                printf("Result = %.2lf", divide(a,b));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}