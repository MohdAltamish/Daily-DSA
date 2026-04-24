// WAP that calculate the simple interest and compound interest. The principal amount, rate of interest and time are entered through the keyboard.

#include<stdio.h> 
#include<math.h>

int main(){
    int p, r, t; 
    float si, ci;
    printf("Enter Principle amount: ");
    scanf("%d", &p);

    printf("Enter Rate: ");
    scanf("%d", &r);

    printf("Enter Time: ");
    scanf("%d", &t);

    si = p*r*t/100;
    ci = p * (pow((1 + r / 100), t)) - p;

    printf("The Simple Interest is: %.2f", si);
    printf("The Compound Interest is: %.2f", ci);

    return 0;
}