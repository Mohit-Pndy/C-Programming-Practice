// Q.Write a program to continuously ask for a password until the correct one is entered.
#include<stdio.h>
int main(){
    int pass = 78654;
    int input;
    do{
        printf("enter password: ");
        scanf("%d",&input);
    } while (input != pass);
    printf("Correct Paasword!!\n");
    return 0;
}