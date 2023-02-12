// Define a macro to swap the contents of two variables. Illustrate the use of this macro in a program.

#include <stdio.h>
#define SWAP(a, b) (a ^= b, b ^= a, a ^= b)

int main(void)
{
    int iNo1 = 10, iNo2 = 20;

    printf("Values before swap : %d %d\n", iNo1, iNo2);

    SWAP(iNo1, iNo2);

    printf("Values after swap : %d %d\n", iNo1, iNo2);

    return 0;
}