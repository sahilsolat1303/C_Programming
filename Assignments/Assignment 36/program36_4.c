/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description :   Accept string from user and display only digits from that.
//  Input :         string
//  Output :        string
//  Auther :        Sahil Subhash Solat
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

void DisplayDigit(char str[])
{
     while(*str != '\0')
    {
        if(((*str <='9') &&(*str>='0')))
        {
            printf("%c",*str);            
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

    DisplayDigit(arr);

    
    return 0;
}

