// Q.Write a program to check whether a year is a leap year or not.
#include<stdio.h>
int main(){
    int year;
    
    printf("enter a year: ");
    scanf("%d",&year);

/* Divisible by 4?
   NO  → Not a leap year
   YES → Check Divisible by 100?
        NO  → Leap year
        YES → Check Divisible by 400?
            YES → Leap year
            NO  → Not a leap year 
*/
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("leap year.\n");
    }
    else{
        printf("not a leap year.\n");
    }
    
    return 0;
}
