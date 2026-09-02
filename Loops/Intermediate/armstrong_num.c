// Q. Write a program to check if a number is an Armstrong number.
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    int original = num, sum = 0;
    int extracted_digit,cube_value;
    for(int i = num; i != 0; i = i/10){
        extracted_digit = i % 10;
        cube_value = pow(extracted_digit,3);
        sum = sum + cube_value;
    }
    
    if(sum == original){
        printf("Armstrong number\n");
    }
    else{
        printf("Not an Armstrong number\n");
    }
    return 0;
}