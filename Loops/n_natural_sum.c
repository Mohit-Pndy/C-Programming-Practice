// Q.Write a program to calculate the sum of the first N natural numbers.
#include<stdio.h>
int main(){
    int num;
    
    printf("enter the nth term: ");
    scanf("%d", &num);

    int sum = 0;
    for (int i = 1; i <= num; i++){
        sum = sum + i;
    }
    printf("sum of first %d natural number is: %d\n", num,sum);
    
    return 0;
}
