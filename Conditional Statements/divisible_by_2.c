// Q. Take an integer input. Print 'Divisible by 2' if it is, otherwise print 'Not divisible by 2'.
#include<stdio.h>
int main(){
    int num;
    
    printf("enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Divisible by 2.\n");
    }
    else{
        printf("Not divisible by 2.\n");
    }
    
    return 0;
}
