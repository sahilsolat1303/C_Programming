/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                               //input output
#include<stdbool.h>                                                             //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  ChkGreater
//  Description:    It is use to number equal or not
//  Input:          integer
//  Output:         boolean
//  Author:         Sahil Subhash Solat
//  Date:           18/10/2025
//
/////////////////////////////////////////////////////////

bool ChkGreater(
                    int iNo1,                                                   //Frist input
                    int iNo2                                                    //Second input
                )
{
    if(iNo1 == iNo2)                                                            // Business logic
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
    int iValue1 = 0, iValue2 =0;                                                // To accepet input
    bool bRet = false;                                                          // To Store the result
    
    printf("Please Enter two number:\n");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkGreater(iValue1,iValue2);                                         // Function call

    if(bRet==true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}

////////////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 10       input: 10       output: Equal
//  input: 10       input: 12       output: Not Equal
//  input: -10      input: 10       output: Not Equal
//
////////////////////////////////////////////////////////
