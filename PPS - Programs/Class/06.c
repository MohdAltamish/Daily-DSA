// 6. Write a program to create an array and display its elements.

#include<stdio.h> 

int main(){
    int a[100] , n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are: ");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}