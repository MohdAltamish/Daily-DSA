// WAP to print Armstrong numbers from 1 to 100.
#include <stdio.h>
#include <math.h>

int main() {
    int n, originalNum, remainder, result, digits;
    
    printf("Armstrong numbers between 1 and 100 are: \n");
    
    for(n = 1; n <= 100; n++) {
        int temp = n;
        digits = 0;
        while(temp != 0) {
            temp /= 10;
            digits++;
        }
        
        originalNum = n;
        result = 0;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            // pow returns double, simple multiplication for small powers might be safer but pow is ok
            int p = 1;
            for(int k=0; k<digits; k++) p *= remainder;
            result += p;
            originalNum /= 10;
        }
        
        if (result == n) {
            printf("%d ", n);
        }
    }
    printf("\n");
    
    return 0;
}
