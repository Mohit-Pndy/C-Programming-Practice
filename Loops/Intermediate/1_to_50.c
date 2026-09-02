// Q32. Write a program to print numbers from 1 to 50, but skip multiples of 5 using the continue statement.
#include<stdio.h>
int main(){
    for(int i = 1; i <= 50; i++){
        if(i % 5 == 0){
            continue;
        }
        else{
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}