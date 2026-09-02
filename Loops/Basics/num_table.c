// Q.Write a program to print the multiplication table of a given number.
#include<stdio.h>
int main(){
    int num;
    
    printf("enter number: ");
    scanf("%d", &num);

    /* num = stays constant (the number whose table we want)
       i = changes from 1 to 10 (the multiplier) */
    for(int i = 1; i <= 10; i++){
        int table = num * i;
        printf("%d ", table);
    }
    
    return 0;
}
