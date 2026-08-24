// Q. Write a program to find the volume of a cube.
#include<stdio.h>
int main(){
    int side;
    
    printf("Enter side of cube: ");
    scanf("%d", &side);
    
    int volume = side * side * side;
    printf("Volume of cube: %d\n", volume);
    
    return 0;
}
