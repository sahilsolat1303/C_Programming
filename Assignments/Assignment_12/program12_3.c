/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  sum_of_factors
//  Description:    It is use to sum of all factors
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           22/10/2025
//
/////////////////////////////////////////////////////////

int sum_of_factors(
                        int number                              //Input 
                  )
{
    if(number<0)                                                //Updater
    {
        printf("Invalid Input.");
        return 0;
    }
    int iCnt = 0;
    int iSum = 0;
    for(iCnt=1;iCnt<(number/2);iCnt++)
    {
        if(number%iCnt==0)
        {
            iSum = iSum+iCnt;
        }
    }
    return iSum;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

//Time complexity = O(N/2)
int main(void)
{
    int number;                                                 // To accepet input

    printf("Enter number:\n");
    scanf("%d",&number);

    printf("%d",sum_of_factors(number));                        // Function call
    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 12
//
//  output: 16
//
//  input: 8
//
//  output: 7
//
/////////////////////////////////////////////////
