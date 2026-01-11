/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpySmall
//  Description :   Accept string from user and copy into another string and Convert all characters of string in Small case.
//  Input :         string
//  Output :        string
//  Auther :        Sahil Subhash Solat
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

void StrCpySmall(char *str, char *dest)
{  
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {

            *dest = *str+32;
            
        }
        
            *dest = *str;
        
        dest++;
        str++;
    }
    *dest = '\0';
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{

    char Arr[30]="Marvellous Python 2";    
    char brr[30];

    StrCpySmall(Arr,brr);

    printf("%s",brr);

    return 0;
}

