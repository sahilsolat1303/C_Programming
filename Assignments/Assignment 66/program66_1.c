#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 0x1;
    UINT iResult = 0;

    if(iPos < 1 || iPos > 32)
    {
        return FALSE;
    }

    iMask = iMask << iPos-1;

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
    int iPos = 0;

    printf("Enter the number : ");
    scanf("%u",&iNo);

    printf("Enter the Position : ");
    scanf("%d",&iPos);

    bRet = ChkBit(iNo,iPos);

    if(bRet == TRUE)
    {
        printf("bit is on");
    }
    else{
        printf("bit is off");
    }

    return 0;
}