/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                                   //Input Output

/////////////////////////////////////////////////////////
//
//  Function Name:  Multiply
//  Description:    It is use to multiplication of number
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           18/10/2025
//
/////////////////////////////////////////////////////////

int Multiply(
                int iNo1,                                                           //Frist input
                int iNo2,                                                           //Second input
                int iNo3                                                            //Third input
            )
{
    int multi=1;
    if(iNo1 !=0)
    {
        multi = multi*iNo1;
    }
    if(iNo2 !=0)
    {
        multi= multi*iNo2;
    }
    if(iNo3 !=0)
    {
        multi= multi*iNo3;
    }
    if(iNo1==0 && iNo2==0 && iNo3==0)
    {
        return 0;
    }
    
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 =0, iValue3 = 0;                                        // To accepet input
    int iRet=0;                                                                      // To Store the result
    
    printf("Please Enter three number:\n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);                                        // Function call

    printf("%d",iRet);
    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 5       4       7
//
//  output: 140
//
//  input:  5       0       7
//
//  output: 35
//
//  input:  5       0       0
//
//  output: 5
//
//  input:  0       0       0
//
//  output: 0
//
/////////////////////////////////////////////////