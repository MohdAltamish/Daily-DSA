// WAP to find the sum of digits of the entered number.

#include <stdio.h>

int sum = 0;
int sod(int n)
{
    while (n != 0)
    {
        int remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    return sum;
}
    int main()
    {
        int n;
        printf("Enter an integer: ");
        scanf("%d", &n);
        int result = sod(n);
        printf("Sum of digits = %d\n", result);
        return 0;
    }