// Q. Write a program to convert kilometers to meters.
#include<stdio.h>
int main(){
    float val;
    
    printf("Enter distance in kilometer: ");
    scanf("%f", &val);
    
    int meter = val * 1000;
    printf("Distance in meter: %d\n", meter);
    
    return 0;
}
