// Define a nested macro to find the minimum of three integers. Illustrate the use of this macro in a program

#include <stdio.h>
#define FINDMIN2(a, b) (a < b ? a : b)
#define FINDMIN3(a, b, c) (FINDMIN2(a, b) < c ? FINDMIN2(a, b) : c)

int main(void)
{
    int iNo1 = 0, iNo2 = 0, iNo3 = 0;

    puts("Enter first number : ");
    scanf("%d", &iNo1);

    puts("Enter second number : ");
    scanf("%d", &iNo2);

    puts("Enter third number : ");
    scanf("%d", &iNo3);

    printf("Minimum number is : %d\n", FINDMIN3(iNo1, iNo2, iNo3));

    return 0;
}