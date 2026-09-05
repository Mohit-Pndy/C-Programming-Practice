// Q30. Write a program to check whether a number is a Strong number (sum of factorial of digits equals the number).
#include<stdio.h>
int main(){
    int num;

    printf("enter number: ");
    scanf("%d", &num);

    // Check for invalid input (negative numbers or zero)
    if(num < 1){
        printf("Invalid input\n");
        return 1;
    }

    int temp = num; // Store original number for final comparison.

    int sum = 0; // store sum of factorials of digits.
    int extracted_digit; // store each digit extracted from the number

    for(int j = num; j != 0; j = j/10){

        int factorial = 1; // Reset factorial to 1 for each new digit

        extracted_digit = j % 10; // Extract the last digit

        // Calculate factorial of the extracted digit
        for(int fact = extracted_digit; fact >= 1; fact--){

            factorial = factorial * fact;
        }

        sum = sum + factorial; // Add the factorial to the running sum
    }

    if(temp == sum){ // Check if sum of digit factorials equals the original number
        printf("Strong Number\n");
    }
    else{
        printf("Not a strong number\n");
    }
    return 0;
}