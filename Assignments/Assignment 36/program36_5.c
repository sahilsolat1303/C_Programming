/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhite
//  Description :   Count white spaces of the given string
//  Input :         string
//  Output :        int
//  Auther :        Sahil Subhash Solat
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

int CountWhite(char str[])
{
    int iCount = 0;

     while(*str != '\0')
    {
        if((*str ==' '))
        {
            iCount ++;          
        }
        
        str ++;   

    }
    return iCount;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    
    return 0;
}
