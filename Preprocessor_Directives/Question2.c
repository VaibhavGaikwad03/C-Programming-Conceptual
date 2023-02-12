// Define a macro to check whether a given number is even or odd. Illustrate the use of this macro in a program

#include <stdio.h>
#define CHECKNUM(x) (x % 2 == 0 ? "even" : "odd")

int main(void)
{
    int iNo = 0;

    puts("Enter the number :");
    scanf("%d", &iNo);

    printf("%d is %s number\n", iNo, CHECKNUM(iNo));

    return 0;
}