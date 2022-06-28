#include <stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    int a = 8;
    const float b = 7.333;
    //b = 7.22; Wrong X since b is now a constant and hence its value can not be changed/modified
    //PI = 7.33; Wrong X since PI is a constant defined in the preprocessing stage
    printf("%f", PI);
    return 0;
}
