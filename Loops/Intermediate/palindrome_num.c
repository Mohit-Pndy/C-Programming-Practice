// Q17. Write a program to check if a given number is a palindrome.
#include<stdio.h>
int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    int original = num;
    
    int extrced_digit,reversed_number = 0;
    for(int i = num; i != 0; i= i/10){
        extrced_digit = i % 10;
        reversed_number = reversed_number * 10 + extrced_digit;
    }

    if(reversed_number == original){
        printf("Palindrome Number\n");
    }
    else{
        printf("Not a Palindrome Number\n");
    }
    return 0;
}