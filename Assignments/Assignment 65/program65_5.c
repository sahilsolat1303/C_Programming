#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

int OnBit(UINT iNo)
{
    UINT iMask = 1 << 0 | 1 << 1 | 1 << 2 | 1 << 3;

    return iNo | iMask;
}

int main()
{
    UINT iNo = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%u",&iNo);

    iRet = OnBit(iNo);

    printf("Modify number is : %d",iRet);
    return 0;
}