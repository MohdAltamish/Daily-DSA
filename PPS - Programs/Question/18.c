// WAP to find the reverse of a number.

#include <stdio.h>

int main()
{

    int num, num_reverse = 0, reminder;
    printf("Enter a Number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        reminder = num % 10;
        num_reverse = num_reverse * 10 + reminder;
        num = num / 10;
    }

    printf("Reverse of the number = %d\n", num_reverse);

    return 0;
}