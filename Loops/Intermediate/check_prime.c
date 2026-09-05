// Q. Write a program to check if a number is prime or not.
#include<stdio.h>
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    int a=0;
    for(int i=2; i <= num-1; i++){ /* ->> yha for loop lagayenge aur 2 se initialise krenge kyuki sabse chhota prime number 2 hi hota hai
        aur prime woh hota hai jo 1 se ho aur khudse toh 1 se krne ka koi mtlb nhi hai. aur isko num-1 tak lejayenge kyuki woh khudse se 
        toh hoga hi toh usse pehle wale number tak loop chalayenge */
    
        if (num%i==0){ /* ab yha i ka value ek ek krke badhta jayega aur if mein aake check krega ki kya woh number i se divisible hai ya nhi */
        
        a=1; /* agar koi bhi number hua toh a ki value update hojayegi aur condition run kar jayega aur update ke baad condition break hojayegi.*/
        break;
    }
    }
    if(a==0){ /* yha pe wapas if condition lagayenge aur check krenge ki kya a ki value 0 hai ya nhi. */
        printf("%d is an prime number\n",num); /* agar 0 hui tohyeh print kardega */
    }
    else { 
        printf("%d is a compostie number\n",num); /* aur nhi hui toh yeh print kardega... */
    }
    return 0;
}