/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                       //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  CheckNumberType
//  Description:    It is use to check positive,negative,
//                  zero
//  Input:          integer
//  Output:         character
//  Author:         Sahil Subhash Solat
//  Date:           18/10/2025
//
/////////////////////////////////////////////////////////

void CheckNumberType(
                        int num                                         //Input
                    )
{
    if(num<0)                                                           // Business logic
    {
        printf("%d is the Negative\n",num);
    }
    else if(num>0)                                                      // Business logic
    {
         printf("%d is the Positive\n",num);
    }
    else
    {
         printf("%d is the Zero\n",num);
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int number;                                                         // To accepet input
    printf("Enter number:\n");
    scanf("%d",&number);
    CheckNumberType(number);                                            // Function call
    return 0;
}

////////////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//      input: 10        output: 10 is the Positive
//      input: -7        output: -7 is the Negative
//      input: 0         output: 0 is the Zero
//
////////////////////////////////////////////////////////