// Using == Relational Operator
#include <stdio.h>

int main()
{
    int a, b, c;
    a = 34;
    b = 6;
    c = 34;

    printf("Is 'a' equal to 'b' = %d\n", a==b); //The system returns 0 as it is false
    printf("Is 'a' equal to 'c' = %d\n", a==c); //The system returns 1 as it is true
    return 0;
}
