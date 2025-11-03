/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  count_factors
//  Description:    It is use to count total factors of 
//                  number
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           22/10/2025
//
/////////////////////////////////////////////////////////

int count_factors(
                        int number                              //input 
                 )
{
    if(number<0)                                                //Updater
    {
        printf("Invalid Input.");
        return  0;
    }
    int iCount = 0;
    int iCnt = 0;
    for(iCnt=1;iCnt<=(number/2);iCnt++)
    {
        if(number%iCnt==0)
        {
            iCount = iCount+1;           
        }
    }
    return iCount;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

//Time complexity = O(N/2)
int main()
{
    int number;                                                 // To accepet input

    printf("Enter number:\n");
    scanf("%d",&number);

    printf("%d\n",count_factors(number));                       // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 12
//
//  output: 5
//
//  input: 8
//
//  output: 3
//
/////////////////////////////////////////////////
