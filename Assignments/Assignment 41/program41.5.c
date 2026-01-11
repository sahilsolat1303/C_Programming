/////////////////////////////////////////////////////////////////////
//
//  Function Name : Multi
//  Description :   Return multiplication of all digits.
//  Input :         int
//  Output :        int
//  Auther :        Sahil Subhash Solat
//  Date :          30/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Multi(int iNo)
{
    int iDigit = 0;
    static int imult = 1;

    if(iNo > 0)
    {
       iDigit = iNo%10;
       imult = iDigit*imult;
       iNo = iNo/10;
       
       Multi(iNo);
    }
    return imult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Numer:\n");
    scanf("%d",&iValue);

    iRet = Multi(iValue);

    printf("%d",iRet);

    return 0;
}