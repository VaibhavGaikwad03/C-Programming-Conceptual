// Define a macro to find the sum of digits of a three-digit number. Illustrate the use of this macro in a program.

#include <stdio.h>
#define SUMDIGIT(n) (n % 10 + ((n / 10) % 10) + (n / 100))

int main(void)
{
    int iNo = 0;

    puts("Enter the number : ");
    scanf("%d", &iNo);

    printf("Sum of digit %d is : %d\n", iNo, SUMDIGIT(iNo));

    return 0;
}