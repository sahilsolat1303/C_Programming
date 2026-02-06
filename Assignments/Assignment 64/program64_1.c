#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0;
    UINT iResult = 0;

    iMask = 0x00004000;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    UINT iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%u",&iNo);

    bRet = ChkBit(iNo);

    if(bRet == TRUE)
    {
        printf("15th bit is on");
    }
    else{
        printf("15th bit is off");
    }

    return 0;
}