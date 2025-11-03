/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                   //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  FindMax
//  Description:    It is use to find maximum of two number
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           18/10/2025
//
/////////////////////////////////////////////////////////

int FindMax(
                int a,                                              //Frist input
                int b                                               //Second input
            )
{
    if(a>b)                                                         // Business logic
    {
        return a;
    }
    else
    {
        return b;
    }

}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{

    int num1,num2;                                                  // To accepet input
    int result;                                                     // To Store the result
    
    printf("Enter the two number:\n");
    scanf("%d %d",&num1,&num2);

    result = FindMax(num1,num2);                                    // Function call
    printf("Maximum is:%d\n",result);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 10       input: 30        output: 30
//  input: 40       input: 10        output: 40
//  input: 1        input: 6         output: 6
//
/////////////////////////////////////////////////