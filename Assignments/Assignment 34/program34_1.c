/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Function Name:  DisplayASCII
//  Description:    It is use to print ASCII table
//  Input:          None
//  Output:         void
//  Author:         Sahil Subhash Solat
//  Date:           28/11/2025
//
/////////////////////////////////////////////////////////

void DisplayASCII()
{
    int i =0;

    printf("Dec\tChar\tHex\tOct\n");
    printf("-------------------------------\n");

    for(i=0;i<=255;i++)
    {
        printf("%3d\t%c\t%x\t%o\n",i,i,i,i);
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();

    return 0;
}

