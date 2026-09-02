// Q4. Write a program to print all odd numbers between 1 and 50 using a do-while loop.
#include<stdio.h>
int main(){
    int i = 1;
    do{
        if(i%2 != 0){
            printf("%d ",i);
        }
        i++;
    } while (i<50);
    return 0;
}