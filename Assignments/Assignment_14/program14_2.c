/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output
#define TRUE 1
#define FALSE 0

typedef int BOOL;                                               // use for only boolean

/////////////////////////////////////////////////////////
//
//  Function Name:  ChkZero
//  Description:    It is use to check it contain 0 or not
//  Input:          integer
//  Output:         boolean
//  Author:         Sahil Subhash Solat
//  Date:           23/10/2025
//
/////////////////////////////////////////////////////////

BOOL ChkZero(
                int iNo                                         //input 
            )

{
    int iDigit = 0;
    while (iNo!=0)
    {
        iDigit = iNo%10;
         if(iDigit==0)
        {
            return TRUE;  
            break;     
        }
        iNo = iNo/10;
       
        
    }
    return FALSE;
    

}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

//Time complexity = O(N)
int main()
{
    int iValue = 0;                                             // To accepet input
    BOOL bRet = FALSE;                                          // To Store the result

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);                                     // Function call

    if(bRet==TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 2395
//
//  output: There is no Zero
//
//  input: 1018
//
//  output: It Contains Zero
//
//  input: 9000
//
//  output: It Contains Zero
//
/////////////////////////////////////////////////
