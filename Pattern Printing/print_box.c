// Q. Write a program to print a box/rectangle pattern using * with printf.
#include<stdio.h>
int main(){
    int row,column;
    
    printf("enter number of rows: ");
    scanf("%d",&row);
    printf("enter number of colums: ");
    scanf("%d",&column);

    for(int i=1; i<=row; i++){
        for(int j=1; j<=column; j++){
            printf(" * ");
        }
    printf("\n");
    }
    return 0;
}
