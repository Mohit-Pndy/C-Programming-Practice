// Q. Swap Two Numbers (without using third variable) 
#include<stdio.h>
int main(){
    int num1,num2;
    
    printf("Enter The value of X: ");
    scanf("%d", &num1);
    printf("Enter the value of Y: ");
    scanf("%d", &num2);
    
    int temp_a = num1, temp_b = num2;
    
    num1 = num1 + num2; // Store the sum of both numbers in num1.
    num2 = num1 - num2; // Retrieve the original value of num1 into num2.
    num1 = num1 - num2; // 
    
    printf("Original value of X & Y: %d, %d\n", temp_a, temp_b);
    printf("Swapped Value of X & Y: %d, %d\n", num1, num2);
    return 0;
}
