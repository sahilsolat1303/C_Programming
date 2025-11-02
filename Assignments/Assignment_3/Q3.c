/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //Input output

/////////////////////////////////////////////////////////
//
//  Function Name:  DisplayEvenFactor
//  Description:    It is use to print even factores only
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           17/10/2025
//
/////////////////////////////////////////////////////////


void DisplayEvenFactor(
                            int iNo                             //Input
                      )
{
    int i = 0;
    if(iNo<=0)                                                  //Updater
    {
        iNo = -iNo;
    }
    for(i=1;i<=iNo;i++)                                        
    {
        if(iNo%i==0&&i%2==0)
        {
            printf("%d",i);
        }
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                             //To accepet input

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);                                  //Function call
    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 36
//
//  output: 2   6   12  18  36
//
/////////////////////////////////////////////////