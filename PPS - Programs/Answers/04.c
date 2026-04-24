// WAP that accepts the temperature in Centigrade and converts into Fahrenheit using the formula C/5=(F-32)/9.
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // Formula: C/5 = (F-32)/9  =>  F = (9*C)/5 + 32  => F = 1.8*C + 32
    fahrenheit = (1.8 * celsius) + 32;
    
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
    
    return 0;
}
