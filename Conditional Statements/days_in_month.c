// Q.Write a program to input a month number and print the number of days in that month using a switch statement.
#include<stdio.h>
int main(){
    int month;
    
    printf("enter month(1-12): ");
    scanf("%d", &month);

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("This month has 31 days.\n");
                 break;

        case 4:
        case 6:
        case 9:
        case 11: printf("This month has 30 days.\n");
                 break;

        case 2: printf("February has 28 days (29 days in a leap year).\n");
                break;

        default: printf("Invalid Input\n");
    }
    
    return 0;
}
