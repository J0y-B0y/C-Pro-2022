/*Binary Conversions:
0 -> 00
1 -> 01
2 -> 10
3 -> 11

So, if we take 2&3;
 10
&11
---
 10 
Here we get a 0 in ones place as when applying the & operation, it requires both values to be true*/
#include <stdio.h>

int main()
{
    int a, b;
    a = 2;
    b = 3;

    printf("a & b = %d\n", a&b); //Here the result appears to be 2 as the final result as shown in the comment above is 10 which is the value for 2

    return 0;
}
