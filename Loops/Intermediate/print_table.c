// Q. Write a program using nested for loops to print the multiplication table for numbers 1 to 5 in a formatted grid.
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Starting Table Number: ");
    scanf("%d",&num1);
    printf("Ending Table Number: ");
    scanf("%d",&num2);

    /* this loop will print the table in a row wise form */
    // for(int i=num1; i<=num2; i++){ // it's controlling the range of table 
    //     if((num1 <= 0)){
    //         printf("Invalid Input\n");
    //         return 0;
    //     }
    //     for(int j=i; j<=(i*10); j = j+i){ // it's printing the output 
    //         printf(" %3d ",j);
    //     }
    //     printf("\n");
    // }

    /* This loop will print the table in column form */
    for(int i=1; i<=10; i++){ // it's controlling the multiples 
        for(int j=num1; j<=num2; j++){ // it's controlling the table range.
            int table = j*i; // here we are storing the value of the number and it's multiple.
            printf("%3d",table);
        }
        printf("\n");
    }
    return 0;
}

/* note: upar wale loop mein table print ho rha hai lekin row waise jaise ek row mein ek table
lekin niche wale mein column waise print ho rha hai */

/* note: row wala loop
1. isme sabse pehle maine outerloop mein yeh set kiya hai ki range kaha se kaha tak ka hoga mtlb
table kaha se kaha tak ka print krna hai.

2. phir andar mein if condition mein yeh lagaya hai ki kahi 0 ya negative input mile toh kya krna hai.
3. ab inner loop mein yeh set kiya hai ki table kaise print hoga toh sabse pehle j ko i pe set kiya yani woh number
sabse pehle jo user input dega uska table print hoga phir condition set kiy aki uss number ke 10th mulitple 
tak hi print krna hai aur updation mein rkha hai j = j+i mtlb pehle j=i hai aur i=num hai yani ultimately pehle 
step mein j=num hai phir update aise hoga ki ek baar loop chlne ke baad "j" mein i aake add hoga aur i ka value 
abhi fix hai kyuki inner loop hi chlega toh j bhi 2 hai aur i bhi 2 toh update hoke 4 hojayega j aur yeh print hoga phir conditon
check hoga ki i*10 yani ki 20 se kam hai ya nhi phir wapas updation mein jayega toh j ab 4 hai aur i abhi bhi 2 toh 4+2= 6, ab yeh store hoga j mein 
aise krke 10th multiple tak print hoga.

4. ab yaha outer loop run hoga aur i ka value 2 se update hoke 3 hojayega aur condition check hoga phir same 
pattern mein inner loop run hoga. */

/* note: column wala loop
1. isme row wale se exact opposite hoga 

2. pehle: table fixed tha, multiplier change ho raha tha mtlb ki iss form mein print ho rha tha
    2   4   6   8
    3   6   9  12
    4   8  12  16
    
means 2 fix hai aur uske multiple change ho rha hai like:
    (2*1) (2*2) (2*3) ..... 
    (3*1) (3*2) (3*3) .....
    (4*1) (4*2) (4*3) .....

3. lekin ab column type mein print krna hai mtlb aise toh:
    2   3   4
    4   6   8
    6   9  12
    8  12  16
    .   .   .
    .   .   .
    .   .   .

toh yeh kuch aise print ho rha hai: 
    2×1   3×1   4×1
    2×2   3×2   4×2
    2×3   3×3   4×3

toh iske liye outer loop aur inner loop mein changes aayenge and yk tujhe kitni confusion hui thi yeh krne mein.

4. sabse first cheez ki row mein ab bas next table ki number print krni hai aur column mein table print krni hai 
toh outerloop mein dalenge 1 to 10 tak ki range kyuki yeh multiples print kregi ab aur inner loop mein num1 and num2 
ki range fix krege aur dono ke updation 1 by 1 means (i++ & j++) increase honge.

5. ab jab inner loop ke andar aayenge toh yha ek variable banado table name se aur isme store karo i*j 
iska mtlb i jo multiple print kregi ab aur j jo number print krega ki kiska table print krna hai usko multiply
kroo aur phir agle line mein print karwa do.

6. ab samjhte hai yeh wala loop kaam kaise kiya toh sabse pehle aayega outer loop aur usme i ko initialise krenge
1 se aur conditon rkehnge i<=10 tak kyuki table 10 tak hi print krni hai aur inner loop mein j ko set krenge num1 pe 
aur condition rkhenge num2 tak aur updation toh dono ka same hai
toh jab inner loop open hoga toh dono ka multiplication store hoga table meina aur print hojayega 

so let's say ki table range mila 2 to 6 tak toh sabse pehle i = 1 pe hai aur condition check hogi i<=10 and then inner 
loop pe ayega yeh j ko initialise krega num1 se jo ki hai 2 aur condition check hoga ki kya j<=num2? phir andar jayega dono
multiply hoga aur print hojayega phir ab isme updation hoga aur j+1 hojauega means 3 toh wapas condition check and print
toh ab i = 1 pe hai toh 2 se leke 6 tak ke 1 wale multiple print honge.

ab outer loop pe aayega toh yha yeh update hoke 2 hoajayega phir same pattern repeat.

/*
=================================================
Difference between Row-wise and Column-wise logic
=================================================

Both use nested loops, but their job changes.

---------------------------------
1. ROW-WISE TABLE PRINTING
---------------------------------

Code:

for(i = num1; i <= num2; i++)
{
    for(j = i; j <= i*10; j = j+i)
}

Understanding:

Outer loop:

i = num1
Starts from the first table.

Condition:
i <= num2
Runs until the last table.

Update:
i++
Moves to the next table.

Meaning:
This loop decides WHICH table will print.


Inner loop:

j = i
Starts from the first multiple of current table.

Condition:
j <= i*10
Runs until 10th multiple.

Update:
j = j+i
Adds the table number again and again.

Example:
table = 2

j = 2
j = 2+2 = 4
j = 4+2 = 6
j = 6+2 = 8

This creates:
2,4,6,8...

Meaning:
This loop creates multiples of one fixed table.

Main idea:
Outer loop changes table.
Inner loop changes multiples.

---------------------------------
2. COLUMN-WISE TABLE PRINTING
---------------------------------

Code:

for(i = 1; i <= 10; i++)
{
    for(j = num1; j <= num2; j++)
    {
        table = j*i;
    }
}

Understanding:

Outer loop:

i = 1
Starts from first multiplier.

Condition:
i <= 10
Runs till 10th multiplier.

Update:
i++
Moves to next multiplier.

Meaning:
This loop decides WHICH multiple number is being printed.


Inner loop:

j = num1
Starts from first table.

Condition:
j <= num2
Runs until last table.

Update:
j++
Moves to next table.

Example:
if range is 2 to 4

j = 2
j = 3
j = 4

Meaning:
This loop decides WHICH table is printing.


Calculation:

table = j*i

Example:
i = 2

2*2 = 4
3*2 = 6
4*2 = 8

Main idea:
Outer loop changes multiplier.
Inner loop changes table.

---------------------------------
Simple difference:
---------------------------------

ROW-WISE:
Fix one table and keep adding same number.

Example:
2 → 4 → 6 → 8
(update = j+i)

COLUMN-WISE:
Fix one multiplier and change table numbers.

Example:
2*2, 3*2, 4*2
(update = j++)

Shortcut:

Row-wise:
"Same table, changing multiples"

Column-wise:
"Same multiplier, changing tables"
*/

/* Row-wise mein j=j+i isliye hai kyunki same table ka next multiple chahiye.
Column-wise mein j++ isliye hai kyunki next table pe jaana hai, multiple formula se niklega (j*i). */