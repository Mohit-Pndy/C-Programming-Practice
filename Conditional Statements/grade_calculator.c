// Q. Write a program that takes marks (0–100) as input and prints the grade: A (≥90), B (≥75), C (≥60), D (≥40), F (<40) using if-else if ladder.
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks < 0 || marks > 100){
        printf("Invalid marks! Enter between 0-100.\n");
        return 0;
    }
    
    if (marks >= 90){
        printf("A grade\n");
    }
    else if (marks >= 75){
        printf("B grade\n");
    }
    else if (marks >= 60){
        printf("C grade\n");
    }
    else if (marks >= 40){
        printf("D grade\n");
    }
    else{
        printf("F grade\n");
    }
    return 0;
}
