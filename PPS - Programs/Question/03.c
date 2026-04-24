// WAP to calculate the area and circumference of a circle.

#include <stdio.h>

int main()
{
    int r;
    float ar, cr;
    printf("Enter the Radius: ");
    scanf("%d", &r);

    cr = 2 * 3.14 * r;
    ar = 3.14 * r * r;

    printf("The Area of the Circle is: %.2f \n", ar);
    printf("The Circumference of the Circle is: %.2f \n", cr);

    return 0;
}