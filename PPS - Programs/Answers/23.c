// WAP that inputs two arrays and saves sum of corresponding elements of these arrays in a third array and prints them.
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of elements for arrays: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n], sumArr[n];
    
    printf("Enter elements of first array: \n");
    for(i = 0; i < n; i++) scanf("%d", &arr1[i]);
    
    printf("Enter elements of second array: \n");
    for(i = 0; i < n; i++) scanf("%d", &arr2[i]);
    
    printf("Sum array: \n");
    for(i = 0; i < n; i++) {
        sumArr[i] = arr1[i] + arr2[i];
        printf("%d ", sumArr[i]);
    }
    printf("\n");
    
    return 0;
}
