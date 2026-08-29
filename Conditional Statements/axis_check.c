// Q. Write a program to check whether a given point (x, y) lies on the x-axis, y-axis, or at the origin.
#include<stdio.h>
int main(){
    int x, y;
    
    printf("Enter x coordinate: ");
    scanf("%d", &x);

    printf("Enter y coordinate: ");
    scanf("%d", &y);

    if(x == 0 && y == 0){
        printf("Point is at the origin\n");
    }
    else if(x == 0){
        printf("Point lies on the y-axis\n");
    }
    else if(y == 0){
        printf("Point lies on the x-axis\n");
    }
    else{
        printf("Point lies neither on x-axis nor y-axis\n");
    }
    
    return 0;
}
