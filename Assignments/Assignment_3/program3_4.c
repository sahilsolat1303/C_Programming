/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  DisplayConvert
//  Description:    It is use to convert the case of 
//                  character
//  Input:          character
//  Output:         character
//  Author:         Sahil Subhash Solat
//  Date:           17/10/2025
//
/////////////////////////////////////////////////////////


void DisplayConvert(
                        char CValue                             //Input
                    )
{
 
    if(CValue>='A' && CValue<='Z')                              //Business logic
    {
        printf("%c -> %c",CValue,CValue+32);
    }
    else if(CValue>='a' && CValue<='z')
    {
         printf("%c -> %c",CValue,CValue-32);
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';                                           // To accepet input
    printf("Enter the Charater:\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);                                       // Function call

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: a        output: A
//  input: D        output: d
//  input: r        output: R
//  input: T        output: t
// 
//
/////////////////////////////////////////////////

