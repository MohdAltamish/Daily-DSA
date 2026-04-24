// WAP to print Armstrong numbers from 1 to 100.

#include<stdio.h> 

int main(){
    
    int n , am;

    printf("Enter a Number: ");
    scanf("%d",&n);
    am = n;
    int sum = 0;
    while (am > 0)
    {
        int rem = am % 10;
        sum = sum + rem*rem*rem;
        am = am / 10;
    }
    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}