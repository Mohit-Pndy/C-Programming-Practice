// Q. Write a program to find the Greatest Common Divisor (GCD) of two numbers.
#include<stdio.h>
int main(){
    int num1,num2;
    
    printf("enter 1st number: ");
    scanf("%d", &num1);
    
    printf("enter 2nd number: ");
    scanf("%d", &num2);
    
    // Find the smaller of the two numbers first
    // since GCD can never be greater than the smaller number.
    int smaller;
    if(num1 < num2){
        smaller = num1;
    }
    else{
        smaller = num2;
    }

    // Loop from the smaller number down to 1.
    // Since checking in descending order, the first common divisor
    // found will automatically be the GCD.
    for(int i = smaller; i >= 1; i--){

        int remainder_1 = num1 % i; // Checks if 'i' divides num1 completely
        int remainder_2 = num2 % i; // Checks if 'i' divides num2 completely
        
        // If both remainders are 0, 'i' is a common divisor of both numbers 
        // Since the largest possible value was checked first, this is the GCD.
        if(remainder_1 == 0 && remainder_2 == 0){
            printf("GCD: %d\n", i);
            break; // stop as soon as GCD is found
        }
    }
    printf("\n");
    return 0;
}