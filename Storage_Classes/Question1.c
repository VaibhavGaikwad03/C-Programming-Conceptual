// Making the use of recursion and static variables, print the first n terms of Fibonacci series.

#include <stdio.h>

void DisplayFibonacci(int iNum)
{
    static int iNo1 = 0;
    static int iNo2 = 1;
    static int iNo3 = 0;
    static int i = 0;

    if (i == 0)
    {
        printf("%d ", iNo1);
        i++;
    }
    if (i == 1)
    {
        printf("%d ", iNo2);
        i++;
    }
    if (i < iNum)
    {
        iNo3 = iNo1 + iNo2;
        printf("%d ", iNo3);
        iNo1 = iNo2;
        iNo2 = iNo3;
        i++;
        DisplayFibonacci(iNum);
    }
}

int main(void)
{
    int iTerms = 0;

    printf("Enter the number of terms that you want to print : \n");
    scanf("%d", &iTerms);

    DisplayFibonacci(iTerms);

    return 0;
}