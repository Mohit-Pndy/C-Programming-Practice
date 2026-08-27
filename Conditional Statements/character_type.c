// Q. Write a program that reads a character from the user and prints whether it is uppercase, lowercase, digit, or special character — using ASCII value comparisons only (no library functions).
#include<stdio.h>
int main(){
    char input;
    
    printf("enter a character: ");
    scanf("%c", &input);

    if(input >= 65 && input <= 90){
        printf("It's uppercase\n");
    }
    else if (input >= 97 && input <= 122){
        printf("It's lowercase\n");
    }
    else if (input >= 48 && input <= 57){
        printf("It's a Digit\n");
    }
    else if((input >= 32 && input <= 37) ||
            (input >= 58 && input <= 64) ||
            (input >= 91 && input <= 96) ||
            (input >= 123 && input <= 126)){

        printf("It's Special Character\n");
    }
    else{
        printf("It's Other Character\n");
    }
    return 0;
}
