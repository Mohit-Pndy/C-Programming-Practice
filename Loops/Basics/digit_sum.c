// Q.Write a program to find the sum of digits of a given integer.
#include<stdio.h>
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    int sum = 0;
    for(int i = num; i != 0; i = i/10){
        int reminder = i % 10;
        sum = sum + reminder;
    }
    printf("sum of digit: %d\n",sum);
    return 0;
}