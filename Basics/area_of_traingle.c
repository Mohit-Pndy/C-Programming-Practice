// Q. Write a program to find the area of a triangle (base & height).
#include<stdio.h>
int main(){
    int breadth,height;
    
    printf("Enter base of the triangle: ");
    scanf("%d", &breadth);
    printf("Enter height of the triangle: ");
    scanf("%d", &height);
    
    float area = 0.5 * breadth * height;
    printf("The area of triangle is: %f\n", area);
    
    return 0;
}
