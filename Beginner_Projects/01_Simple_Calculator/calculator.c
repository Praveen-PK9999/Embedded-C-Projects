#include <stdio.h>

int main()
{
    int choice;
    int num1, num2;

    printf("=================================\n");
    printf("       SIMPLE CALCULATOR\n");
    printf("=================================\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 5)
    {
        printf("Enter first number: ");
        scanf("%d", &num1);

        printf("Enter second number: ");
        scanf("%d", &num2);
    }

    switch(choice)
    {
        case 1:
            printf("\nResult = %d\n", num1 + num2);
            break;

        case 2:
            printf("\nResult = %d\n", num1 - num2);
            break;

        case 3:
            printf("\nResult = %d\n", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("\nResult = %.2f\n", (float)num1 / num2);
            else
                printf("\nError: Division by zero is not allowed.\n");
            break;

        case 5:
            if(num2 != 0)
                printf("\nResult = %d\n", num1 % num2);
            else
                printf("\nError: Modulus by zero is not allowed.\n");
            break;

        case 6:
            printf("\nThank you for using the calculator!\n");
            break;

        default:
            printf("\nInvalid choice!\n");
    }

    return 0;
}
