// WAP to add and multiply two matrices of order nxn.
#include <stdio.h>

int main() {
    int n, i, j, k;
    
    printf("Enter the order of the matrix (n): ");
    scanf("%d", &n);
    
    int a[n][n], b[n][n], sum[n][n], prod[n][n];

    printf("Enter elements of 1st matrix:\n");
    for(i=0; i<n; i++) for(j=0; j<n; j++) scanf("%d", &a[i][j]);

    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<n; i++) for(j=0; j<n; j++) scanf("%d", &b[i][j]);

    // Addition
    printf("\nSum of Matrices:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    printf("\nProduct of Matrices:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            prod[i][j] = 0;
            for(k=0; k<n; k++) {
                prod[i][j] += a[i][k] * b[k][j];
            }
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}
