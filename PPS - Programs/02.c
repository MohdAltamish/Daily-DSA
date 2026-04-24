#include <stdio.h>

int main()
{
    int arr[6] = {10,20,30,40,50}; // Increase size to accommodate new element
    int pos, value; // Position to insert and value to insert

    printf("Enter position to insert (0-5): ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);
            
    for(int i = 5; i > pos; i--)
        arr[i] = arr[i-1];

    arr[pos] = value;

    for(int i = 0; i < 6; i++)
        printf("%d ", arr[i]);

    return 0;
}