// Q. Write a program to take two numbers as input and print their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    int a,b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int add = a + b, diff = a - b, pro = a * b, div = a / b;

    printf("Addition of 2 number: %d\n", add);
    printf("Difference of 2 number: %d\n", diff);
    printf("Product of 2 number: %d\n", pro);
    printf("Division of 2 number: %d\n", div);
    
    return 0;
}
