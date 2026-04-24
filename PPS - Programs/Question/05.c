// WAP that swaps values of two variables using a third variable.

#include<stdio.h> 

int main(){
    int a, b, s;
    
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before Swapping; a = %d, b = %d \n", a,b);

    s = a;
    a = b;
    b = s;

    printf("After swapping: a = %d, b = %d\n", a,b);

    return 0;
}