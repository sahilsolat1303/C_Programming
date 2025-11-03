/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                                   //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to print single digit number
//                  into word
//  Input:          integer
//  Output:         character
//  Author:         Sahil Subhash Solat
//  Date:           19/10/2025
//
/////////////////////////////////////////////////////////

void Display(
                int iNo                                                             //Input
            )
{
    if(iNo<0)                                                                       //updater
    {
        iNo = -iNo;
    }
    if(iNo>9)
    {
        printf("Invaild Number\n");
    }
    if(iNo==1)
    {
        printf("One\n");
    }
    else if(iNo== 2)
    {
        printf("Two\n");
    }
    else if(iNo==3)
    {
        printf("Three\n");
    }
    else if(iNo==4)
    {
        printf("Four\n");
    }
    else if(iNo==5)
    {
        printf("Five\n");
    }
    else if(iNo==6)
    {
        printf("Six\n");
    }
    else if(iNo==7)
    {
        printf("Seven\n");
    }
    else if(iNo==8)
    {
        printf("Eight\n");
    }
    else if(iNo==9)
    {
        printf("Nine\n");
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                                 // To accepet input

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Display(iValue);                                                                // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 9        output: Nine
//  input: 3        output: Three
//  input: 12       output: Invaild Number
//  input: -4       output: Four
//
/////////////////////////////////////////////////