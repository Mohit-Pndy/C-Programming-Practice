// Q. Write a program using const keyword to fix the value of gravity (9.8) and calculate force given mass as input.
#include<stdio.h>
int main(){
    const float gravity = 9.8;
    float mass;
    
    printf("enter mass: ");
    scanf("%f", &mass);

    float force = mass * gravity;
    printf("Force is: %.2f\n", force);
    return 0;
}
