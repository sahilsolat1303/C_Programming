#include<stdio.h>    //input output
#include<stdbool.h>  // use for only boolean

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    printf("Result is :%d\n",bRet);

    return 0;
}