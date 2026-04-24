// WAP that checks whether the two numbers entered by the user are equal or not.

#include<stdio.h> 

int main(){
    int num1, num2;

    printf("Enter a Number: ");
    scanf("%d", &num1);

    printf("Enter a Number: ");
    scanf("%d", &num2);

    if(num1 == num2){
        printf("The number are equal! \n");
    }

    else{
        printf("The number are not equal! \n");
    }

    return 0;
}