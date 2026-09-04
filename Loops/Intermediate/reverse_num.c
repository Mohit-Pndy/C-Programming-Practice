// Q16. Write a program to reverse a given integer (e.g., 123 to 321).
#include<stdio.h> 
#include<math.h>
int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);
    
    int count = 0; // Count the total number of digits in the entered number
    for(int i = num; i != 0; i = i/10){
        count = count + 1;
    }
    
    /* Determine the highest place value required for the reversed number 
       Example For a 4-digit number, it's 10^3. */
    int power_expo = count - 1; 

    int power = pow(10, power_expo); // Starting place value = 10^(digits - 1). For 4 digits, it's 1000.
    
    int reverse_num = 0;
    int extracted_digit,place_value;

    
    for(int i = 1; i<= count; i++){ // Run the loop 'count' times

        extracted_digit = num % 10; // Extract the last digit of the number

        num = num / 10; // Update the number by removing its last digit after value extraction.
        
        place_value = power * extracted_digit; // Multiply extracted digit by current place value to build reversed number (e.g., 4 * 1000 = 4000).

        reverse_num = reverse_num + place_value; // Add the calculated value to the reversed number.
        
        power = power / 10; // Update place value to the next lower power of 10 (e.g., 1000 -> 100).
    }
    printf("reversed value: %d\n", reverse_num);
    return 0;
}



// OR 
// #include <stdio.h>

// int main(){
//     int num;
    
//     printf("Enter number: ");
//     scanf("%d", &num);

//     int reverse_num = 0;
//     int extracted_digit;

//     while(num != 0){
//         // Extract the last digit of the number
//         extracted_digit = num % 10;

//         // Remove the last digit from the original number
//         num = num / 10;

//         // Shift existing digits to the left and add the extracted digit
//         reverse_num = reverse_num * 10 + extracted_digit;
//     }

//     printf("Reversed value: %d\n", reverse_num);

//     return 0;
// }