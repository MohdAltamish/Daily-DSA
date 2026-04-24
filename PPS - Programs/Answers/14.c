// WAP to print sum of even and odd numbers from 1 to N numbers.
#include <stdio.h>

int main() {
    int i, n, evenSum = 0, oddSum = 0;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if (i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
    }
    
    printf("Sum of all even numbers = %d\n", evenSum);
    printf("Sum of all odd numbers = %d\n", oddSum);
    
    return 0;
}
