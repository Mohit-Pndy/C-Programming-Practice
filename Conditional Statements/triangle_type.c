// Q. Write a program that reads three sides of a triangle and determines if it is equilateral, isosceles, or scalene. Also check if a valid triangle can be formed.
#include<stdio.h>
int main(){
    int side1, side2, side3;
    
    printf("enter 1st side: ");
        scanf("%d", &side1);
    printf("enter 2nd side: ");
        scanf("%d", &side2);
    printf("enter 3rd side: ");
        scanf("%d", &side3);
    
/*  A valid triangle must satisfy all three conditions:
    The sum of any two sides must be greater than the third side
   
   side1 + side2 > side3
   side2 + side3 > side1
   side1 + side3 > side2
*/
    
    if((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)){

        if((side1 == side2) && (side2 == side3)){

            printf("Equilateral Triangle\n"); // Equilateral triangle condition: all three sides must be equal.
        }
        else if((side1 == side2) || (side1 == side3) || (side2 == side3)){

            printf("Isosceles Triangle\n"); // Isosceles triangle condition: at least two sides must be equal.
        } 
        else{
            printf("Scalene Triangle\n"); // Scalene triangle condition: all three sides must be different.
        }
    }
    else{
        printf("Not a valid Triangle!!\nEnter sides correctly\n");
    }
    
    return 0;
}
