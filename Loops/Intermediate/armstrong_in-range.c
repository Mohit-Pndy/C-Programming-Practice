// Q. Write a program to print all Armstrong numbers between two ranges.
#include<stdio.h>
#include<math.h>
int main(){
    int range1,range2;
    printf("enter starting range: ");
    scanf("%d", &range1);

    printf("enter ending range: ");
    scanf("%d", &range2);

    int extracted_digit;
    float power;
    for(int i = range1; i <= range2; i++){
        int sum = 0, original = i; // note: sum inside outer loop so that it get's reset after every single iteration

        for(int j = original; j != 0; j = j/10){
            extracted_digit = j % 10;
            power = pow(extracted_digit,3);
            sum = sum + power;
        }
        if(sum == original){
            printf("%d ", sum);
        }
    }
    printf("\n");
    return 0;
}