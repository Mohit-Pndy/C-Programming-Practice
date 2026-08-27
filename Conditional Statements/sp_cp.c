#include<stdio.h>
int main(){
    int cp,sp;
    
    printf("enter the cost price: " );
    scanf("%d", &cp);
    
    printf("enter the selling price: " );
    scanf("%d", &sp);
    
    if(sp > cp){
        printf("Profit\n");
    }
    else{
        printf("Loss\n");
    }
    return 0;
}
