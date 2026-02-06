#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x1;
    UINT iResult = 0;
    
    iMask = iMask << 9-1 | iMask << 12-1;

    iResult = iNo & iMask;

    if(iResult != iMask)
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

    printf("Enter the first number : ");
    scanf("%u",&iNo);

    bRet = ChkBit(iNo);

    if(bRet == TRUE)
    {
        printf("Either 9th or 12th bit is OFF\n");
    }
    else
    {
        printf("Both 9th and 12th bits are ON\n");
    }
    return 0;
}