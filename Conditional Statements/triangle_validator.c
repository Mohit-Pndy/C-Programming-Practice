// Q.Write a program to check whether a triangle is valid or not if angles are given.
#include<stdio.h>
int main(){
    int angle_1, angle_2, angle_3;
    
    printf("enter 1st angle: ");
    scanf("%d", &angle_1);
    printf("enter 2nd angle: ");
    scanf("%d", &angle_2);
    printf("enter 3rd angle: ");
    scanf("%d", &angle_3);

    if(angle_1 > 0 && angle_2 > 0 && angle_3 > 0){
        int angle_sum = angle_1 + angle_2 + angle_3;
        if(angle_sum == 180){
            printf("valid triangle.\n");
        }
        else{
            printf("not a valid triangle.\n");
        }
    }
    else{
        printf("invalid angles\n");
    }
    return 0;
}
