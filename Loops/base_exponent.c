// Q.Write a program to find the power of a number using a loop (base^exponent).
#include<stdio.h>
int main(){
    int base,expo;
    printf("enter base: ");
    scanf("%d", &base);
    printf("enter exponent: ");
    scanf("%d", &expo);

    int power = 1; // Start with 1 (because anything × 1 = 1)
    // --> Loop runs exactly expo times — that's the number of times we multiply the base with itself i.e i goes from 1 to expo.
    for(int i = 1; i <= expo; i++){
        // First iteration:  power = 1 × base = base
        // Second iteration: power = base × base = base²
        // Third iteration:  power = base² × base = base³ ... and so on
        power = power * base;
    }
    // --> 'power' stores the final answer (base^exponent)
    printf("power: %d\n", power);
    return 0;
}