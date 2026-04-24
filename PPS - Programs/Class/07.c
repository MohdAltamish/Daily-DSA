// 7. Write a program to create a 3D array and display its elements.

#include<stdio.h> 

int main(){
    int x, y, z;
    printf("Enter dimensions of the 3D array (x y z): ");
    scanf("%d %d %d", &x, &y, &z); 

    int a[x] [y] [z];
    printf("Enter %d elements:\n", x*y*z);
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            for(int k=0; k<z; k++){
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    printf("The elements of the 3D array are:\n");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            for(int k=0; k<z; k++){
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}