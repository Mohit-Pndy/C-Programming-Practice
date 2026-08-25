// Q. Write a program to check if the given number is a natural number.
#include<stdio.h>
int main(){
    int num;
    
    printf("enter a number: ");
    scanf("%d", &num);

    if(num >= 1){
        printf("Natrual number\n");
    }
    else{
        printf("Not a Natural number\n");
    }
    
    return 0;
}
