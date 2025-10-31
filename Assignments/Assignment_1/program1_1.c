/////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
//
//  Function Name:  Division
//  Description:    It is use to perform Division
//  Input:          integer,integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           15/10/2025
//
/////////////////////////////////////////////////


int Division(
                 int iNo1,                                      //Frist input
                 int iNo2                                       //Second input
                
            )
{
    int iAns = 0;                                               // To Store result

    if(iNo2 > iNo1)
    {
        return -1;
    }
    
    iAns = iNo1 / iNo2;                                          // Business logic
    return iAns;
}

/////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////


int main()
{
    int iValue1 = 15, iValue2 = 5;                                 // To accepet input
    int iRet = 0;                                                  // To Store result

    iRet = Division(iValue1,iValue2);                              // Method call
    printf("Division is:%d",iRet);

    return 0;
}


