// Q.Write a program to read numbers from the user until they enter 0, and then print their sum.
#include<stdio.h>
int main(){
    int sum = 0; // store the cumulative sum of all numbers entered by the user
    int input;

    // using do-while because We have to keep asking the user for input until they enter 0
    do{
        printf("enter a number: ");
        scanf("%d", &input);
        sum = sum + input;
    } while(input != 0);
    printf("The sum is: %d\n", sum);
    return 0;
}