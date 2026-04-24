/* WAP that takes two operands and one operator from the user and perform the operation and prints the result by using Switch statement. */

#include <stdio.h>

int main()
{
    int oper1, oper2;
    char opern;

    printf("Enter two operands: ");
    scanf("%d %d", &oper1, &oper2);
    printf("Enter operator (a = Addition \n, b = Subtraction \n, c = Multiplication \n, d = Division): ");
    scanf(" %c", &opern);

    switch (opern)
    {
    case 'a':
        printf("Result: %d\n", oper1 + oper2);
        break;
    case 'b':
        printf("Result: %d\n", oper1 - oper2);
        break;
    case 'c':
        printf("Result: %d\n", oper1 * oper2);
        break;
    case 'd':
        if (oper2 != 0)
        {
            printf("Result: %.2f\n", (float)oper1 / oper2);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid operator.\n");
    }
    return 0;
}