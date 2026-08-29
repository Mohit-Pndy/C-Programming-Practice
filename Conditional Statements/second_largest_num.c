// Q. Write a program to find the second largest among three numbers using nested if-else.
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter 1st number: ");
    scanf("%d", &num1);
    printf("enter 1st number: ");
    scanf("%d", &num2);
    printf("enter 1st number: ");
    scanf("%d", &num3);
    
    if((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)){
        printf("%d is the second largest\n", num1);
    }
    else if((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)){
        printf("%d is the second largest\n", num2);
    }
    else if ((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2)){
        printf("%d is the second largest\n", num3);
    }
    else{
        printf("invalid input\n");
    }
    return 0;
}