// Q.Write a program to count the number of digits in an integer.
#include<stdio.h>
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    int count = 0;
    for(int i = num; i != 0; i=i/10){
        count = count + 1;
    }
    printf("no. of digit: %d\n",count);
    return 0;
}