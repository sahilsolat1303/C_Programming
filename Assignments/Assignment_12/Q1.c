/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  print_factors
//  Description:    It is use to print factors of number
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           22/10/2025
//
/////////////////////////////////////////////////////////

void print_factors(
                        int number                              //Input
                   )
{
    if(number<0)                                                //Updater
    {
        printf("Invalid Input.");
        return;
    }
    int iCnt = 0;
    for(iCnt=1;iCnt<=(number/2);iCnt++)
    {
        if(number%iCnt==0)
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
    int number;                                                 // To accepet input

    printf("Enter number:\n");
    scanf("%d",&number);

    print_factors(number);                                      // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 12
//
//  output: 1       2       3       4       6
//
//  input: 8
//
//  output: 1       2       4
//
/////////////////////////////////////////////////