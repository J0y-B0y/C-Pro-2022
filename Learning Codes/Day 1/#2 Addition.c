#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b; //We have defined 2 integers "a" and "b" here
    printf("Enter number a\n"); //print the text in "" as it is in the console
    scanf("%d", &a); /*scanf is a function belonging to stdio.h & helps to take "input" from the user and assign it to a [in this case]
 & ~ adress of operator, here it means, store to the adress of 'a'
 The above explanation applies to the below print f & scan f commands as well
 \n refers to ~ New Line Character*/
    printf("Enter number b\n");
    scanf("%d", &b);

    printf("The sum is %d\n", a+b);
    return 0; //Note: The value of int and 0 should match

//returns 0 value to the Operating System
}

/* Special Note: If you want to change the file a.out name to xyz:
Type -o "xyz" [without ""]*/
