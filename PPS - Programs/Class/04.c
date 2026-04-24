#include<stdio.h> 

int main(){
    float m,x,y;


    printf("Enter the value X: ");
    scanf("%f", &x);

    printf("Enter the value Y: ");
    scanf("%f", &y);
    
    if (y == 0){
        printf("Wrong y value: ");
    }
    else{ 
        m = (-x/y);
        printf("The slope of line is: %.2f", m);
    }
    return 0;
}
