// Q33. Write a program that demonstrates the use of the break statement by exiting a loop when a negative number is entered.
#include<stdio.h>
int main(){
    int num;

    for(int i = 1; ; i++){
        printf("enter a number: ");
        scanf("%d", &num);

        if(num < 0){
            break;
        }
    }
    return 0;
}