/////////////////////////////////////////////////////////////////////
//
//  Function Name : Fact
//  Description :   Return factorial of the number.
//  Input :         int
//  Output :        int
//  Auther :        Sahil Subhash Solat
//  Date :          30/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Fact(int iNo)
{
    static int iFact = 1;

    if(iNo > 0)
    {
       iFact = iFact*iNo;
       iNo--;
       Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Numer:\n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d",iRet);

    return 0;
}