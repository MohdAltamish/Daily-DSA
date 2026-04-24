// WAP that accepts the marks of 5 subjects and finds the sum and percentage marks 
#include <stdio.h>

int main() {
    float marks[5], sum = 0, percentage;
    int i;
    
    printf("Enter marks of 5 subjects: \n");
    for(i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    
    percentage = (sum / 500) * 100; // Assuming total marks per subject is 100
    
    printf("Sum: %.2f\n", sum);
    printf("Percentage: %.2f%%\n", percentage);
    
    return 0;
}