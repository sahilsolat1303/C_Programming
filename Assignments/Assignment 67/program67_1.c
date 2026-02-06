#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;

    while (iNo != 0)
    {
        if(iNo & 1)
        {
            iCount++;
        }
        iNo = iNo >> 1;
    }

    return iCount;
          
}

int main()
{
    UINT iNo = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%u",&iNo);

    iRet = CountOne(iNo);

    printf("Count of on bit is : %d",iRet);
    return 0;
}