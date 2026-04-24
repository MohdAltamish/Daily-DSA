// WAP to search an element in an array using binary search techniques.
#include <stdio.h>

int main() {
    int n, i, search, first, last, middle;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    printf("Enter element to search: ");
    scanf("%d", &search);
    
    first = 0;
    last = n - 1;
    middle = (first + last)/2;
    
    while (first <= last) {
        if (arr[middle] < search)
            first = middle + 1;
        else if (arr[middle] == search) {
            printf("%d found at location %d.\n", search, middle+1);
            break;
        }
        else
            last = middle - 1;
        
        middle = (first + last)/2;
    }
    if (first > last)
        printf("Not found! %d is not present in the list.\n", search);
    
    return 0;
}
