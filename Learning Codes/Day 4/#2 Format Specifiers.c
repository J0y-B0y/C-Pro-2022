#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 8;
    float b = 7.333;
    printf("The value of a is %d and the value of b is %f\n", a, b);
    // In the above print statement %d prints the value of a & %f prints the value of b
    printf("The value of b is %.4f\n", b);
    printf("The value of b is %8.4f\n", b);
    printf("The value of b is %-8.4f\n", b);
    // Experimenting with the floating points
    // Here, example: %8.4f means print int/float x with upto 4 decimal places and leave space of 8 characters first then print the number
    return 0;
}
