#include<stdio.h> 

int main(){
    int a1[5] = {1, 2, 3, 4, 5};
    int a2[5];
    for (int i = 0; i < 5; i++){
        a2[i] = a1[i];
    }
    printf("Copied array: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", a2[i]);
    }   
    return 0;
}