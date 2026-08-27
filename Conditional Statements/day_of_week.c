// Q. Write a program using a switch statement that takes a number 1–7 from the user and prints the corresponding day of the week.
#include<stdio.h>
int main(){
    int day;
    
    printf("Select a number (1-7): ");
    scanf("%d", &day);

    switch(day){
        case 1: printf("Sunday\n");
                break;

        case 2: printf("Monday\n");
        	break;

        case 3: printf("Tuesday\n");
        	break;

        case 4: printf("Wednesday\n");
        	break;

        case 5: printf("Thursday\n");
        	break;

        case 6: printf("Friday\n");
        	break;

        case 7: printf("Saturday\n");
        	break;

        default: printf("Invalid Input\n");
        	break;
    }
    return 0;
}
