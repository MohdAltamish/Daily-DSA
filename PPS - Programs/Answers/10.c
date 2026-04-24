/* WAP that accepts marks of five subjects and finds percentage and prints grades according to the following criteria:
Between 90-100%--------------Print ‘A’ 
80-90%----------------------------Print ‘B’ 
60-80%---------------------------Print ‘C’ 
Below 60%----------------------Print ‘D’
*/
#include <stdio.h>

int main() {
    float marks[5], sum = 0, percentage;
    int i;
    
    printf("Enter marks of 5 subjects: \n");
    for(i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    
    percentage = (sum / 500) * 100;
    
    printf("Percentage: %.2f%%\n", percentage);
    
    if (percentage >= 90)
        printf("Grade: A\n");
    else if (percentage >= 80)
        printf("Grade: B\n");
    else if (percentage >= 60)
        printf("Grade: C\n");
    else
        printf("Grade: D\n");
        
    return 0;
}
