#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

void CommanBit(UINT iNo1, UINT iNo2)
{
    int iPos = 1;
    UINT iResult = 0;

    iResult = iNo1 & iNo2;

    while (iResult != 0)
    {
        if(iResult & 1)
        {
            printf("%d",iPos);
        }
        iResult = iResult >> 1;
        iPos++;
    }

   
          
}

int main()
{
    UINT iNo1 = 0;
    UINT iNo2 = 0;
    

    printf("Enter the first number : ");
    scanf("%u",&iNo1);

    printf("Enter the second number : ");
    scanf("%u",&iNo2);

    CommanBit(iNo1,iNo2);

    return 0;
}