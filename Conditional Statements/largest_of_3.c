// Q. Largest of 3 numbers- Take 3 integer inputs from the user and print the largest one.
#include<stdio.h>
int main(){
    int num1,num2,num3;
    
    printf("enter 1st number: ");
    scanf("%d", &num1);

    printf("enter 2nd number: ");
    scanf("%d", &num2);

    printf("enter 3rd number: ");
    scanf("%d", &num3);
    
    int largest = num1;

    if (num2 > largest)
        largest = num2;

    if (num3 > largest)
        largest = num3;
        
    printf("%d is the largest one.\n", largest);
    
    return 0;
}