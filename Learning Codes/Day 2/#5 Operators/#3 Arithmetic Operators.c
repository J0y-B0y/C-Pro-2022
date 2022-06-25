// Case 2 [c is an integer while d is a floating type]
#include <stdio.h>

int main()
{
    int c;
    float d;
    c = 34;
    d = 6.34;

    printf("c - d = %f\n", c-d);
    printf("c * d = %f\n", c*d);
    printf("c / d = %f\n", c/d);
    printf("c + d = %f\n", c+d);

    return 0;
}

//NOTE: For executing an operation with an integer and a float, %f must be used instead of %d
