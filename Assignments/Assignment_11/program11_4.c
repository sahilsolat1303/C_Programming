/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  RangeSumEven
//  Description:    It is use to print add of all even 
//                  number between range
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           21/10/2025
//
/////////////////////////////////////////////////////////

void RangeSumEven(
                    int iStart,                                  //Frist input
                    int iEnd                                     //Second input
                )
{
    if(iStart>iEnd || iStart<0)                                  //Updater
    {
        printf("Invaild range");
        return;
    }
    int iCnt = 0;
    int sum = 0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt%2)==0)
        {
            sum = sum+iCnt;                                      // Business logic
        }
    }
        printf("%d",sum);
    
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

//Time complexity = O(N)
int main()
{ 
    int iValue1=0,iValue2=0;                                     // To accepet input

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n");
    scanf("%d",&iValue2);

    RangeSumEven(iValue1,iValue2);                               // Function call

    return 0;

}
/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 23   32
//
//  output: 140 
//
//  input: 10    10
//
//  output: 10
//
//  input:-4   2
//  
//  output: Invaild range
//
//  input:  90  18
//
//  output: Invaild range
//
/////////////////////////////////////////////////
