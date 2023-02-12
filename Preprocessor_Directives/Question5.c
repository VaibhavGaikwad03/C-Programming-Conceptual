// Define a macro to check whether a given three-digit number is an Armstrong number or not. Illustrate the use of this macro in a program.

#include <stdio.h>
#define POWER(x) ((x) * (x) * (x))
#define CHECKARMSTRONG(n) (n == POWER(n % 10) + POWER(n / 10 % 10) + POWER(n / 100 % 10) ? "is" : "is not")

int main(void)
{
    int iNo = 0;

    puts("Enter the three digit number : ");
    scanf("%d", &iNo);

    printf("%d %s armstrong number\n", iNo, CHECKARMSTRONG(iNo));

    return 0;
}