// C program to swap two numbers using a temporary variable

#include<stdio.h> 

int main(){
    int a  = 2 , b = 3;
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
