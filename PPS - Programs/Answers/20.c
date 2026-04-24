// WAP to convert binary number into decimal number and vice versa.
#include <stdio.h>
#include <math.h>

long long convertToBinary(int n);
int convertToDecimal(long long n);

int main() {
    int n, choice;
    long long binary;
    
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter a decimal number: ");
        scanf("%d", &n);
        printf("%d in decimal = %lld in binary\n", n, convertToBinary(n));
    } else if (choice == 2) {
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        printf("%lld in binary = %d in decimal\n", binary, convertToDecimal(binary));
    } else {
        printf("Invalid choice\n");
    }
    
    return 0;
}

long long convertToBinary(int n) {
    long long binary = 0;
    int remainder, i = 1;

    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

int convertToDecimal(long long n) {
    int decimal = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}
