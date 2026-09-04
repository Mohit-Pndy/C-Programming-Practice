// Q. Write a program to check if a given number is a Prime number.
#include<stdio.h>
int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    int is_prime = 1;
    if(num < 2){
        is_prime = 0;
    }
    else{
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                is_prime = 0;
                break;
            }
        }
    }

    if(is_prime == 1){
        printf("prime number\n");
    }
    else{
        printf("not a prime number\n");
    }
    return 0;
}