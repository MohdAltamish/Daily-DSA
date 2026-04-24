// WAP that accepts the marks of 5 subjects and finds the sum and percentage marks 

#include<stdio.h> 

int main(){
    int marks[5];
    int sum = 0;
    float percentage;
    float avg;
    
    printf("Enter Marks: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    percentage = (sum / 500.0) * 100;
    avg = sum / 5.0;
    printf("Total Marks is = %d\n", sum);
    printf("Percentage = %.2f%%\n", percentage);
    printf("Average = %.2f\n", avg);
    return 0;
}