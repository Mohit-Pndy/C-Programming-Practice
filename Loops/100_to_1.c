// Q. Write a program to print numbers from 100 down to 1 using a while loop.
#include<stdio.h>
int main(){

    printf("Counting from 100 to 1: \n");
    int i = 100;
    while (i >= 1){
        printf("%d ",i);
        i--;
    }
    
    return 0;
}
