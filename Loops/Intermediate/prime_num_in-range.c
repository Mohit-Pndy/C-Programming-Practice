// Q. Write a program to print all Prime numbers between 1 and N.
#include<stdio.h>
int main(){
    int range1,range2;
    printf("enter starting range: ");
    scanf("%d", &range1);

    printf("enter ending range: ");
    scanf("%d", &range2);

    if(range1 < 2){
        printf("Invalid Input\n");
    }
    else{
        for(int i = range1; i <= range2; i++){
            int num = i;
            int is_prime = 1; // Assume the current number is prime; reset for each iteration.
            for(int j = 2; j < num; j++){
                int prime_check = num % j;
                if(prime_check == 0){
                    is_prime = 0; // divisor found, so the current number is not prime.
                    break;
                }
            }
            if(is_prime != 0){ // prints number only if is_prime is not equal to 0.
                printf("%d ", num);
            }
        }
    }
    return 0;
}