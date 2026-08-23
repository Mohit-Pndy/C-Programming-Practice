// Q. write a program to find area of square.
#include<stdio.h>
int main(){
    int side;
    
    printf("enter side: ");
    scanf("%d", &side);
    
    int area = side * side;
    printf("Area of the square is: %d \n", area);
    
    return 0;
}
