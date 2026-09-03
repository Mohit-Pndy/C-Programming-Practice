// Q. Write a program to find the Least Common Multiple (LCM) of two numbers.
#include<stdio.h>
int main(){
    int num1,num2;

    printf("enter 1st number: ");
    scanf("%d", &num1);
    printf("enter 2nd number: ");
    scanf("%d", &num2);

    if(num1 < 1 || num2 < 1){ // Validate input: both numbers must be positive integers (>= 1). 
        printf("Invalid input\n");
        return 1; // Exit program with error code 1.
    }

    int product = num1 * num2;

    // Find the smaller number as the starting point for the HCF search.
    int temp;
    if(num1 < num2){
        temp = num1;
    }
    else{
        temp = num2;
    }

    int divi_1,divi_2,hcf; // variables to store remainders and the final hcf.
    for(int i = temp; i >= 1; i--){ // start from the smaller number and iterate downwards until we find a common divisor.
        divi_1 = num1 % i;
        divi_2 = num2 % i;

        // if both remainders are zero, 'i' is a common divisor.
        if(divi_1 == 0 && divi_2 == 0){
            hcf = i; // store the hcf.
            break; // exit the loop as we've found the highest common factor.
        }
    }

    int lcm = product / hcf; // Calculate LCM using the formula: LCM = (num1 * num2) / HCF
    printf("LCM: %d\n", lcm);
    return 0;
}