/* WAP that accepts marks of five subjects and finds percentage and prints grades according to the following criteria:
Between 90-100%--------------Print ‘A’
80-90%----------------------------Print ‘B’
60-80%---------------------------Print ‘C’
Below 60%----------------------Print ‘D’
*/

#include <stdio.h>

int main()
{
    int marks[5];
    int total = 0;
    float percentage;

    printf("Enter marks of five subjects: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    percentage = (total / 500.0) * 100;

    if (percentage >= 90 && percentage <= 100)
    {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Grade: A\n");
    }
    else if (percentage >= 80 && percentage < 90)
    {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Grade: B\n");
    }
    else if (percentage >= 60 && percentage < 80)
    {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Grade: C\n");
    }
    else
    {
        printf("Percentage: %.2f%%\n", percentage);
        printf("Grade: D\n");
    }

    return 0;
}