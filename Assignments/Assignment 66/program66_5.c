#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xF000000F;

    int iResult = iNo ^ iMask;

    return iResult;
    
    
}

int main()
{
    UINT iNo = 0;
    int iRet = FALSE;
    int iPos = 0;

    printf("Enter the number : ");
    scanf("%u",&iNo);

    iRet = ToggleBit(iNo);

    printf("Modify number is : %d",iRet);

    return 0;
}