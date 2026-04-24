// WAP that accepts the temperature in Centigrade and converts into Fahrenheit using the formula C/5=(F-32)/9.c

#include <stdio.h>

int main()
{
    float temp_c, temp_f;

    printf("Enter the Temperature in Celcius: ");
    scanf("%f", &temp_c);

    temp_f = (9.0 / 5.0) * temp_c + 32;

    printf("Temperature in Farenheit is: %.2f", temp_f);

    return 0;
}