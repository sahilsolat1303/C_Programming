/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                           //Input Output

/////////////////////////////////////////////////////////
//
//  Function Name:  PrintEven
//  Description:    It is use to print n numbre of even
//                  number
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           17/10/2025
//
/////////////////////////////////////////////////////////


void PrintEven(
                    int iNo                                                 //Input
               )
{
    
    if(iNo<=0)                                                              //Updater 
    {
        return ;    
    }
    int i =0;
    int even =2;
    while (i<iNo)                                                           //Business logic
    {
        printf("%d\n",even);
        even = even+2;
        i++;

    }
    
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                         //To accepet input
    printf("Enter the Number:\n");
    scanf("%d",&iValue);
    PrintEven(iValue);                                                      //Function call
    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//
//  input: 7
//    
//  output: 2   4   6   8   10  12  14
//
/////////////////////////////////////////////////
