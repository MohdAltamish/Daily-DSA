// WAP that finds the sum of diagonal elements of an mxn matrix.
#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;
    
    printf("Enter rows and columns (m n): ");
    scanf("%d %d", &m, &n);
    
    if(m != n) {
        printf("Matrix is not square, diagonal sum not possible.\n");
        return 0;
    }
    
    int a[m][n];
    printf("Enter elements:\n");
    for(i=0; i<m; i++) for(j=0; j<n; j++) scanf("%d", &a[i][j]);
    
    for(i=0; i<m; i++) {
        sum += a[i][i];
    }
    
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}
