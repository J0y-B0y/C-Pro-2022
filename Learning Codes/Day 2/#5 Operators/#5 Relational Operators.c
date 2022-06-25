// Using Logical Operators
#include <stdio.h>

int main()
{
    int a, b, c;
    a = 34;
    b = 6;
    c = 0;

    printf("Are 'a' and 'b' non-zero = %d\n", a&&b);
    printf("Are 'a' and 'c' non-zero = %d\n", a&&c);
    printf("Is one of them true = %d\n", a||c);
    printf("Is 'c' false = %d\n", !c);
    return 0;
}

//Note: 0 ~ False & 1 ~ True
