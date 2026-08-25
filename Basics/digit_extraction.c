// Q. Digit extraction- Take a 3-digit integer (e.g. 347). Print its hundreds, tens, and units digit separately.
#include<stdio.h>
int main(){
    int num;

    printf("Enter a number (100-999): ");
    scanf("%d", &num);

    int hundred = num / 100; 
    int tens = (num / 10) % 10;
    int ones = num % 10;

    printf("Digit at hundreth place: %d\n", hundred);
    printf("Digit at Tenth place: %d\n", tens);
    printf("Digit at Ones place: %d\n", ones);
    
    return 0;
}