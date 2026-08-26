// Q. Check if a character is a digit- Take a single character input. Check if it is a digit (0–9) and print the result.
#include<stdio.h>
int main(){
    char num;
    
    printf("enter a digit: ");
    scanf("%c", &num);
    
    if(num >= '0' && num <= '9'){
        printf("You entered digit %c\n", num);
    }
    else {
        printf("%c is not an digit.\n", num);
    }
    
    return 0;
}
