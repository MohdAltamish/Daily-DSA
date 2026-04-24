// WAP to print the sum of all numbers up to a given number.

#include<stdio.h> 

int main(){
    int num, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 0 ; i <= num ; i++){
        sum = sum + i;
    }

    printf("The Sum of the Number is: %d \n", sum);

    return 0;
}