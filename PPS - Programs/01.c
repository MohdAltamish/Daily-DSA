#include<stdio.h> 

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int pos = 0;
    for(int i = 0; i < 5; i++){
        if(a[i] == 3){
            pos = i;
            break;
        }
    printf("Position of element 3 is %d\n", pos);
    return 0;
}   
