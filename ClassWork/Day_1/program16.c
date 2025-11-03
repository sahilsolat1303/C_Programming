/////////////////////////////////////////////
//
//  Requered heder file   
//
/////////////////////////////////////////////
#include<stdio.h>           //input output
#include<stdbool.h>         // for boolean datatype

/////////////////////////////////////////////
//
//  Function Name:  CheckEvenOdd
//  Description:    It is use to check even or odd
//  Input :         Integer
//  Output :        Boolean
//  Author :        Sahil Subhash Solat
//  Date :          10/10/2025
//
/////////////////////////////////////////////
 
bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    { return true; }
    else
    { return false; }

}

/////////////////////////////////////////////
//
//  Entery 
//
/////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    { printf("%d is Even Number",iValue); }
    else
    { printf("%d is Odd Number",iValue); }
    return 0;
}