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

    iMask = (1<<6) | (1<<7) | (1<<8);

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
        printf("7th and 8th and 9th bits are ON\n");
    }
    else{
        printf("7th and 8th and 9th bit is OFF\n");
    }

    return 0;
}