#include <stdio.h>
/*
1. Print multiplication table of a number entered by the user in pretty form

Example: 
Enter the number you want the multiplication table of:
(Input) 6
(Output) Table of 6:
*/
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number you want the multiplication table of: ");
    scanf("%d", &a);
    printf("Table of %d is: \n", a);
    printf("%d", a); printf(" x 1 = %d\n", a*1);
    printf("%d", a); printf(" x 2 = %d\n", a*2);
    printf("%d", a); printf(" x 3 = %d\n", a*3);
    printf("%d", a); printf(" x 4 = %d\n", a*4);
    printf("%d", a); printf(" x 5 = %d\n", a*5);
    printf("%d", a); printf(" x 6 = %d\n", a*6);
    printf("%d", a); printf(" x 7 = %d\n", a*7);
    printf("%d", a); printf(" x 8 = %d\n", a*8);
    printf("%d", a); printf(" x 9 = %d\n", a*9);
    printf("%d", a); printf(" x 10 = %d\n", a*10);
    return 0;
}

//Side note: int argc, char const *argv[] are command line arguments
