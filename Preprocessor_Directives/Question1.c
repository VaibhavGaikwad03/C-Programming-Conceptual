// Define a macro to find the greatest of the two given numbers. Illustrate the use of this macro in a program

#include <stdio.h>
#define GREATEST(a, b) (a > b ? a : b)

int main(void)
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter the first number : \n");
    scanf("%d", &iNo1);

    printf("Enter the second number : \n");
    scanf("%d", &iNo2);

    printf("Greatest number is : %d", GREATEST(iNo1, iNo2));

    return 0;
}