/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  Percentage
//  Description:    It is use to calculate percentage
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           18/10/2025
//
/////////////////////////////////////////////////////////

float Percentage(
                    int iNo1,                                                                   //Frist input
                    int iNo2                                                                    //Second input
                )
{
    float fRes = 0.0;
    if (iNo2 == 0)
    {
        return 0.0;
    }
    else
    {
        fRes = (((float)iNo2/iNo1)*100);                                                        // convert int into float
        return fRes;
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;                                                               // To accepet input
    float fRet = 0.0;                                                                           // To Store the result

    printf("Please Enter total marks:\n");
    scanf("%d",&iValue1);

    printf("Please Enter Obtained marks:\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);                                                         // Function call
    printf("%.2f%%",fRet);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 1000     745
//
//  output: 74.50%
//
//  input: 100      50
//
//  output: 50.00%
//
/////////////////////////////////////////////////
