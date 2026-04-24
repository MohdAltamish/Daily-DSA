// WAP to print sum of even and odd numbers from 1 to N numbers.

#include<stdio.h> 

int main(){
    int num, i, even_sum = 0, odd_sum = 0;
    
    printf("Enter a Number: ");
    scanf("%d", &num);
    
    for(i = 1; i <= num; i++){
        if(i % 2 == 0){
            even_sum += i;
        } else {
            odd_sum += i;
        }
    }
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);
    
    return 0;
}