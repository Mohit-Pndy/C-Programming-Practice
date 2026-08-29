// Q16. Write a program to find all roots of a quadratic equation using if-else.
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("enter coffiecient a: ");
    scanf("%f", &a);

    printf("enter coffiecient b: ");
    scanf("%f", &b);

    printf("enter coffiecient c: ");
    scanf("%f", &c);

    if(a == 0){
        printf("Invalid input\n");
    }
    else{
        float discriminant,root1,root2,b_sqr,ac_4,root_discriminant;
        b_sqr = pow(b,2);
        ac_4 = 4 * a * c; 
        
        discriminant = b_sqr - ac_4;

        if(discriminant < 0){
            printf("No real root\n");
        }
        else{
            root_discriminant = sqrt(discriminant);

            if(discriminant > 0){ 

                root1 = ((((-b) + root_discriminant)) / (2 * a));
                root2 = (((-b) - root_discriminant) / (2 * a)); 

                printf("Two real & distinct root: %.0f, %.0f\n", root1,root2);
            }
            else if(discriminant == 0){
            
                root1 = ((-b) / (2 * a));
                root2 = root1;

                printf("Two real & equal root: %.0f, %.0f\n", root1,root2);
            }
        }
    }
    
    return 0;
}
