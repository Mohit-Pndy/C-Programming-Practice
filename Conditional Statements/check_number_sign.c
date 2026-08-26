// Q. Positive, negative or zero- Take an integer input and print whether it is Positive, Negative, or Zero.
#include<stdio.h>
int main(){
    int num;
    
    printf("enter a number: ");
    scanf("%d", &num);

    if (num == 0){
        printf("The number you enetered is 0.\n");
    }    
    else if (num > 0){
        printf("The number you entered is positive.\n");
    }
    else {
        printf("The number you entered is negative.\n");
    }
      
    return 0;
}
