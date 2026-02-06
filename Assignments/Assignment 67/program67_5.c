#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

UINT ChkBit(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;
    UINT iResult = 0;
    int i = 0;

    for(i = iStart; i<= iEnd;i++)
    {
        iMask |= 1 << i-1;
    }

    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UINT iNo = 0;
    int iRet = 0; 
    int iStart = 0;
    int iEnd = 0; 

    printf("Enter the first number : ");
    scanf("%u",&iNo);

    printf("Enter the Starting : ");
    scanf("%u",&iStart);

    printf("Enter the Ending : ");
    scanf("%u",&iEnd);

    iRet = ChkBit(iNo,iStart,iEnd);

    printf("Toggle all bits from position 9 to 13 of input number is: %d",iRet);
    return 0;
}