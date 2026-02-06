#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = 0x1;

    if(iPos < 1 || iPos > 32)
    {
        return FALSE;
    }

    iMask = iMask << iPos-1;

    iNo = iNo ^ iMask;

    return iNo;
    
    
}

int main()
{
    UINT iNo = 0;
    int iRet = FALSE;
    int iPos = 0;

    printf("Enter the number : ");
    scanf("%u",&iNo);

    printf("Enter the Position : ");
    scanf("%d",&iPos);

    iRet = OffBit(iNo,iPos);

    printf("Modify number is : %d",iRet);

    return 0;
}