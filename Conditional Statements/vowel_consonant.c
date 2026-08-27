// Q.Write a program to check whether a character is a vowel or consonant.
#include<stdio.h>
#include<ctype.h>
int main(){
    char alpha;
    
    printf("enter a character: ");
    scanf("%c", &alpha);

    if(isalpha(alpha)){
    
        if(alpha == 'A' || alpha == 'a' || alpha == 'E' || alpha == 'e' || 
            alpha == 'I' || alpha == 'i' || alpha == 'O' || alpha == 'o' ||
            alpha == 'U' || alpha == 'u'){
            printf("%c is a vowel.\n", alpha);
        }
        else{
            printf("%c is a consonant.\n", alpha);
        }
    }
    else{
        printf("invalid input.\n");
    }
    
    return 0;
}
