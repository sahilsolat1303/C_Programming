/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  DisplayFactor
//  Description:    It is use to print even factores only
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           17/10/2025
//
/////////////////////////////////////////////////////////


void DisplayFactor(
                        int iNo                                 //Input  
                  )
{
    int i = 0;
    if(iNo<=0)                                                  //Updater

    {
        iNo = -iNo;
    }
    for(i=1;i<iNo;i++)                                        
    {
        if((iNo%i)==0 && (i%2)==0)
        {
            printf("%d\n",i);
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
    int iValue = 0;                                             // To accepet input

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);                                      //Function call
    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 24
//
//  output: 2   4   6   8   12  
//
/////////////////////////////////////////////////

