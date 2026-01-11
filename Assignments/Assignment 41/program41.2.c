/////////////////////////////////////////////////////////////////////
//
//  Function Name : Sum
//  Description :   Return Summation of all digits.
//  Input :         int
//  Output :        int
//  Auther :        Sahil Subhash Solat
//  Date :          30/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Sum(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;
    if(iNo != 0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;
        iSum = iSum + iDigit;

        Sum(iNo);
    }    
    return iSum;
}

int main()
{
    int ivalue = 0,iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&ivalue);

    iRet = Sum(ivalue);

    printf("%d",iRet);

    return 0;
}