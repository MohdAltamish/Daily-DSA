// 5. Write a program to create an array, calculate the sum and average of its elements and display the results.

#include<stdio.h> 

int main(){
    int a[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        printf("%d ", a[i]);
    }
    int sum = 0;
    float avg = 0;
    for(int i=0; i<5; i++){
        sum += a[i];
        avg = sum/5.0;
    }
    printf("\nSum of array elements is %d\n", sum); 
    printf("Average of array elements is %.2f\n", avg);
    return 0;
}