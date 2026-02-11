#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;
    UINT Mask = 0x1;
    

    iMask1 = iMask1 << iPos1-1;
    iMask2 = iMask2 << iPos2-1;

    Mask = iMask1 | iMask2;

    if((iNo & iMask) != 0)
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
    int iPos1 = 0;
    int iPos2 = 0; 

    printf("Enter the first number : ");
    scanf("%u",&iNo);

    printf("Enter the first Position : ");
    scanf("%u",&iPos1);

    printf("Enter the second Position : ");
    scanf("%u",&iPos2);

    bRet = ChkBit(iNo,iPos1,iPos2);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;

}
