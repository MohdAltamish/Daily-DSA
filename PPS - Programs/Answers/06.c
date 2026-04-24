// WAP that checks whether the two numbers entered by the user are equal or not.
#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 == num2) {
        printf("The numbers are equal.\n");
    } else {
        printf("The numbers are not equal.\n");
    }
    
    return 0;
}
