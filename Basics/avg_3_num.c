// Q. Write a program to calculate the average of 3 numbers.
 #include<stdio.h>
 int main(){
    int num1,num2,num3;
    
    printf("enter 1st number: ");
    scanf("%d",&num1);
    printf("enter 2nd number: ");
    scanf("%d",&num2);
    printf("enter 3rd number: ");
    scanf("%d",&num3);

    float avg = (float)(num1 + num2 + num3)/3;
    printf("average of three numbers is: %.2f\n", avg);
    
    return 0;
}
