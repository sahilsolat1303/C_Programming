/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpyX
//  Description :   Accept string from user and copy into another 
//                  string and Remove its all white spaces
//  Input :         string
//  Output :        string
//  Auther :        Sahil Subhash Solat
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

void StrCpyX(char *str, char *dest)
{  
    while(*str != '\0')
    {
        if(*str != ' ')
        {
            *dest = *str;
            dest++;
            
        }
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

    char Arr[30]="Marvellous Python";    
    char brr[30];

    StrCpyX(Arr,brr);

    printf("%s",brr);

    return 0;
}

