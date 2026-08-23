// Q. write a program to find area of circle.
#include<stdio.h>
int main(){
    float pi = 3.14;
    int radius;
    
    printf("enter radius: ");
    scanf("%d", &radius);
    printf("Area of circle is: %f\n", pi * radius * radius);
    
    return 0;
}
