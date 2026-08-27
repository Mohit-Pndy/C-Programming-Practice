// Q.Write a program to check whether a character is uppercase or lowercase.
#include<stdio.h>
#include<ctype.h>
int main(){
    char alpha;
    
    printf("enter an alphabet: ");
    scanf("%c", &alpha);

    if(isalpha(alpha)){
    
        if(isupper(alpha)){
            printf("%c is uppercase.\n", alpha);
        }
        else{
            printf("%c is lowercase.\n", alpha);
        }
    }
    else{
        printf("invalid input.\n");
    }
    return 0;
}
