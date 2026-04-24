// WAP to find the largest no among  20 integers using dynamic memory location.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n = 20;
    float *ptr;
    
    ptr = (float*) calloc(n, sizeof(float));
    
    if(ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    
    printf("Enter %d numbers: \n", n);
    for(i = 0; i < n; ++i) {
        scanf("%f", ptr + i);
    }
    
    for(i = 1; i < n; ++i) {
        if(*ptr < *(ptr + i))
            *ptr = *(ptr + i);
    }
    
    printf("Largest number = %.2f\n", *ptr);
    
    free(ptr);
    return 0;
}
