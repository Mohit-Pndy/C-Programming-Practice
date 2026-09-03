// Q. Write a program to calculate the Fibonacci sequence up to N terms.
#include<stdio.h>
int main(){
    int n;
    printf("enter nth term: ");
    scanf("%d", &n);

    if(n <= 0){ // Check if the entered number is non-positive
        printf("please enter a positive number\n"); // Display error message
        return 0; // Exit the program with success status (0)
    }
    
    // Initialize Fibonacci series variables
    int first = 0; // zero term of Fibonacci series F(0) = 0
    int second = 1; // first term of Fibonacci series F(1) = 1
    int end_sum = 0; // Variable to store the sum of previous two terms (next term)
    for(int i = 0; i <= n; i++){

        if(i == 0){ // Special case: zero term (i = 0)
            printf("%d ", first);
            continue; // Skip remaining loop body and go to next iteration
        }

        if(i == 1){ // Special case: first term (i = 1)
            printf("%d ", second);
            continue; // Skip remaining loop body and go to next iteration
        }

        /* For terms from 3rd to nth term:
           IMPORTANT: Sum of previous two terms (in correct order) 
           Eg: If first = 0, second = 1, then end_sum = 0+1 = 1 */
        end_sum = first + second; // Calculate next term by adding previous two terms

        printf("%d ", end_sum); // Print the newly calculated term

        first = second; // Old second becomes new first

        second = end_sum; // Newly calculated term becomes new second
    }
    return 0;
}

/* TERM ORDER MATTERS:
    In the Fibonacci sequence, the next term is calculated using:
        first + second = end_sum
        
    The terms must move in their correct sequence; we cannot swap their order.
    
    Example:
        0 + 1 = 1
        1 + 1 = 2
        1 + 2 = 3
        2 + 3 = 5
    
    Notice that after 1 + 2 = 3, the next calculation is 2 + 3
    NOT 3 + 2. The order of the terms must be maintained. */