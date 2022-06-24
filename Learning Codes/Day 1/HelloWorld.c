/*Hello World First C Code
Step 1. Type main and press enter for auto-generated code
Step 2. Edit the code option in the provide space to printf("Hello World\n");*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello World\n");
    return 0;
}


/* Side notes:
<stdio.h> ~ Pre-processor command
#include <stdio.h> ~ Expresses to the compiler that a file named stdio.h needs to be included first to run the given code in the program
int main ~ It is a special function because it is where the execution of program starts
main ~ Name of the function
int ~ The integer which will return the function
printf ~ It is a seperate function which is being used from stdio.h file and using it, we print the desired output
return 0; ~ If the program was executed successfully then it will return 0 to the operating system

Note: Every function has a return value

**What is a function?**
Roughly, it helps to breakdown the program in various smaller parts/units
*/

/*How to run program?
1. gcc "file name", in this case ~ gcc HelloWorld.c
2. after running command, a file named a.out will be created 
3. Run the file with ./a.out*/
