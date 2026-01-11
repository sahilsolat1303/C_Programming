/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpyRev
//  Description :   Accept string from user and copy into another 
//                  string and Revrse it 
//  Input :         string
//  Output :        string
//  Auther :        Sahil Subhash Solat
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

void StrCpyRev(char *str, char *dest)
{  
        
    char *start = src;
    char *end = src;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
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

    StrCpyRev(Arr,brr);

    printf("%s",brr);

    return 0;
}

