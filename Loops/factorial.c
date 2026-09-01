// Q.Write a program to calculate the factorial of a number.
#include<stdio.h>
int main(){
    int num;
    
    printf("enter a number: ");
    scanf("%d", &num);

    int fact = 1;
    
    for(int i = num; i >= 1; i--){
        fact = fact * i;
    }
    
    printf("factorial of %d is: %d\n", num,fact);
    return 0;
}
