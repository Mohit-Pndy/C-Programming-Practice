// Q. Write a program to check whether a number is a Perfect number.
#include<stdio.h>
int main(){
    int num;

    printf("enter number: ");
    scanf("%d", &num);

    if(num < 1){
        printf("invalid input!!");
        return 1;
    }

    // temp - stores the original number for comparison later.
    // sum - stores the sum of proper divisors (starting with 1 as all numbers are divisible by 1).
    // is_divisor - Variable to store remainder when checking divisibility.
    int temp = num, sum = 1, is_divisor;
    
    // need to check up to num/2 because no divisor greater than num/2.
    // Start from 2 because 1 is already counted in sum initialization.
    for(int i = 2; i <= num/2; i++){
        is_divisor = num % i;

        if(is_divisor == 0){ // If remainder is 0, then 'i' is a proper divisor.

            sum = sum + i; // Add this divisor to our running sum.
        }
    }

    // Check if the sum of proper divisors equals the original number.
    if(temp == sum){
        printf("Perfect number\n");
    }
    else{
        printf("Not a perfect number\n");
    }
    return 0;
}