/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////


#include<stdio.h>                                                       //input output
#include<stdbool.h>                                                     // use for only boolean
/////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to check even or odd
//  Input:          integer
//  Output:         boolean
//  Author:         Sahil Subhash Solat
//  Date:           16/10/2025
//
/////////////////////////////////////////////////////////


bool ChkEven(
                    int iNo                                             //Input                         
            )
{

    if(iNo < 0)
    {
        iNo = - iNo;                                                    //Updater
    }
    if((iNo%2)==0)                                                      
    {
        return true;
    }
    else
    {
        return false;
    }

}
/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                     // To accepet input
    bool bRet = false;                                                  // To accepet input

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);                                               //Function call
    if(bRet==true)
    {
        printf("%d is an Even..",iValue);
    }
    else
    {
        printf("%d is an Odd..",iValue);
    }
    return 0;
}
