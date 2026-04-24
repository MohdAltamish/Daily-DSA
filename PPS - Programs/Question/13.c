// WAP to find the factorial of a given number.

#include <stdio.h>

int main()
{
    int num , i;
    long factorial = 1;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num == 1 || num == 0){
        factorial = 1;
        return factorial;
    }
    else {
        for(i = 1; i <= num; i++)      
        factorial = factorial * i;
    }

    printf("The Factorial of %d is %ld\n", num, factorial);

    return 0;
}