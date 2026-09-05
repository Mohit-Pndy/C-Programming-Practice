// Q. Write a program to find the sum of all prime numbers between 1 and N.
#include<stdio.h>
int main(){
    int range; // store the upper limit of the range.

    printf("enter the ending range: ");
    scanf("%d", &range);

    int sum = 0, is_prime,prime_num;

    for(int i = 2; i <= range; i++){ // Outer loop: iterate through all numbers from 2 to the given range (0 & 1 are not prime num).
        
        int count = 0; // Reset prime flag for each new number

        for(int j = 2; j <= i-1; j++){ // Inner loop: check if 'i' is divisible by any number from 2 to (i-1).
            is_prime = i % j; 

            if(is_prime == 0){ // If remainder is 0, then 'j' is a factor of 'i'.

                count = 1; // Mark as NOT prime.

                break; // No need to check further, exit inner loop
            }
        }

        // After inner loop completes, check if the number is prime
        // count == 0 means the number had no divisors (other than 1 and itself)
        if(count == 0){
            prime_num = i; // Store the prime number.

            sum = sum + prime_num; // Add it to the sum variable.
        }
    }
    printf("Sum is: %d\n", sum);
    return 0;
}