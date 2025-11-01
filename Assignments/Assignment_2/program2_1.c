/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                             //input output   

/////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to print that number of *
//  Input:          integer
//  Output:         *
//  Author:         Sahil Subhash Solat
//  Date:           16/10/2025
//
/////////////////////////////////////////////////////////


void Display(
                int iNo                                         //Input
            )
{
    int iCnt = 0;
    if(iNo<0)                                                   //Updater
    {
        iNo = -iNo;                                             
    }
    while(iCnt<=iNo)                                           
    {
        printf("*\n");
        iCnt++;
    }
    
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;                                             // To accepet input

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Display(iValue);                                            //Function call

    return 0;
}
