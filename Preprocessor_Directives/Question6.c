// Define a macro to check whether a given year is a leap year or not. Illustrate the use of this macro in a program

#include <stdio.h>
#define CHECKLEAP(x) (x % 4 == 0 ? "is" : "is not")

int main(void)
{
    int iYear = 0;

    puts("Enter the year to check year is leap or not : ");
    scanf("%d", &iYear);

    printf("%d %s leap year\n", iYear, CHECKLEAP(iYear));

    return 0;
}