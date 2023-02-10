/*

An instructor of a computing course wants to store and find the average of marks of all the
students appearing in an examination. As he or she does not know how many students will appear on the
examination day, he or she does not want to create a static array and waste the memory space. Solve his
or her problem by creating a dynamic array, storing the marks of the students and finding the average

*/ 

#include <stdio.h>
#include <malloc.h>

void AcceptStudents(int *Students, const int iNoStudents)
{
    int iCnt = 0;

    printf("Enter the student marks : \n");

    for (iCnt = 0; iCnt < iNoStudents; iCnt++)
        scanf("%d", &Students[iCnt]);
}

float FindAverage(const int *Students, const int iNoStudents)
{
    int iCnt = 0;
    float iSum = 0;

    for (iCnt = 0; iCnt < iNoStudents; iCnt++)
        iSum += Students[iCnt];

    return iSum / iNoStudents;
}

int main(void)
{
    int *Students = NULL, iNoStudents = 0;
    float iAvg = 0;

    printf("How many students have appeared in exam ?\n");
    scanf("%d", &iNoStudents);

    Students = (int *)malloc(sizeof(int) * iNoStudents);

    if (Students == NULL)
        return -1;

    AcceptStudents(Students, iNoStudents);
    iAvg = FindAverage(Students, iNoStudents);

    printf("\nAverage of all student marks is : %f\n", iAvg);

    return 0;
}
