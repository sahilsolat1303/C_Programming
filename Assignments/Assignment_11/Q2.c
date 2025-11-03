/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  RangeDisplayEven
//  Description:    It is use to print even number between 
//                  range
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           21/10/2025
//
/////////////////////////////////////////////////////////

void RangeDisplayEven(
                            int iStart,                         //Frist input
                            int iEnd                            //Second input
                    )
{
    if(iStart>iEnd)                                             //Updater
    {
        printf("Invaild range");
    }
    int iCnt = 0;

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt%2)==0)                                         // Business logic
        {
            printf("%d\t",iCnt);
        }
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

//Time complexity = O(N/2)
int main()
{
    int iValue1=0,iValue2=0;                                    // To accepet input

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);                          // Function call

    return 0;

}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 23   32
//
//  output: 24  26  28  30  32 
//
//  input: 10    10
//
//  output: 10
//
//  input:-4   2
//  
//  output: -4  -2  0   2
//
//  input:  90  18
//
//  output: Invaild range
//
/////////////////////////////////////////////////