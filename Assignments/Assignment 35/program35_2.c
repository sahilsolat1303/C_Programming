/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountSmall
//  Description :   Count the small character of the given input.
//  Input :         string
//  Output :        int
//  Auther :        Sahil Subhash Solat
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0;    
    if(str == NULL)
    {
        return 1;
    }

    while(*str != '\0')
    {
        if((*str >='a') && (*str<='z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("%d",iRet);
    return 0;
}