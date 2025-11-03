/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output
#include<stdbool.h>                                             // use for only boolean

/////////////////////////////////////////////////////////
//
//  Function Name:  is_divisible_by_five
//  Description:    It is use to check number is 
//                  divisible by 5
//  Input:          integer
//  Output:         boolean
//  Author:         Sahil Subhash Solat
//  Date:           22/10/2025
//
/////////////////////////////////////////////////////////

bool is_divisible_by_five(
                                int number                      //input 
                        )
{
    if(number%5==0)                                             // Business logic
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

//Time complexity = O(N)
int main()
{
    int number;                                                 // To accepet input

    printf("Enter number:\n");
    scanf("%d",&number);

    printf("%s\n",is_divisible_by_five(number)?"Yes": "No");    // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 12
//
//  output: No
//
//  input: 10
//
//  output: Yes
//
/////////////////////////////////////////////////
