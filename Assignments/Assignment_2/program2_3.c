/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                     //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to if less than 10 print hello 
//                  otherwise print demo
//  Input:          integer
//  Output:         character
//  Author:         Sahil Subhash Solat
//  Date:           16/10/2025
//
/////////////////////////////////////////////////////////


void Display(
                int iNo                                                 //Input
            )
{
    if(iNo < 10)                                    
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                       // To accepet input

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Display(iValue);                                                     //Function call
    return 0;
}
