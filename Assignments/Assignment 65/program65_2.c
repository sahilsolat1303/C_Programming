#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

int OffBit(UINT iNo)
{
    UINT iMask = 0x1;

    iMask = iMask << 7-1 | iMask <<10-1;

    if(iNo & iMask)
    {
        iNo = iNo & (~iMask);
    }

    return iNo;
}

int main()
{
    UINT iNo = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%u",&iNo);

    iRet = OffBit(iNo);

    printf("Modify number is : %d",iRet);
    return 0;
}