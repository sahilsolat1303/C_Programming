/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : strtoggleX
//  Description :   Convert the given string into toggle.
//  Input :         string
//  Output :        string
//  Auther :        Sahil Subhash Solat
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

void strtogglex(char str[])
{
     while(*str != '\0')
    {
        if(((*str <='z') &&(*str>='a')))
        {
            *str = *str - 32;
        }
        else if(((*str <='Z') &&(*str>='A')))
        {
            *str = *str + 32;
        }
       
        str ++;   

    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    printf("Modified string is %s",arr);

    return 0;
}

