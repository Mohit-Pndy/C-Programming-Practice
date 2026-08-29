// Q35. Write a program to check whether a given three-digit number is a palindrome or not without using loops.
#include<stdio.h>
int main(){
    int num;

    printf("enter number(100-999): ");
    scanf("%d", &num);

    int first_digit, last_digit;
    first_digit = (num / 10) / 10;
    last_digit = num % 10;
    
    if(first_digit == last_digit){
        printf("Palindrome Number\n");
    }
    else{
        printf("Not a Palindrome Number\n");
    }
    
    return 0;
}
