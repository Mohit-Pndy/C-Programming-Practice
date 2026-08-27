// Q.Write a program to print the absolute value of an integer.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    
    printf("enter a number: ");
    scanf("%d", &num);

    // Absolute value means the value of a number without its sign (always non negative).
    if(num >= 0){
        printf("absolute value: %d.\n", num);
    }
    else{
        num = num * (-1);
        printf("absolute value: %d.\n", num);
    }

    // OR Using built in abs() function
    // printf("absolute value: %d\n", abs(num));
    return 0;
}
