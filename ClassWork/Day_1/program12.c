/*
   Algorithm
            SATRT
                 Acccept number and store No
                 divied No by 2
                 if remainder is 0 
                 Than display as Even 
                 Otherwise 
                    Display Odd
            STOP
*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("It is Even Number...\n");
    }
    else
    {
        printf("It is Odd Number...\n");
    }

}


int main()
{
    int iValue=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}