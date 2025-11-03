/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                           //input output
#include<string.h>                                                          // use for only boolean

/////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to print given name
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           18/10/2025
//
/////////////////////////////////////////////////////////

int main()
{

    char Name[30];                                                          // To accepet input

    printf("Please enter Full name:\n");
    scanf("%[^\n]", &Name);

    printf("Your name is %s",Name);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: sahil solat     
//
//  output: Your name is sahil solat
//
/////////////////////////////////////////////////
