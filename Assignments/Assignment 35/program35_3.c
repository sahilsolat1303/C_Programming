/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description :   Display the difference between capital character 
//                  counts and small characters count.
//  Input :         string
//  Output :        int
//  Auther :        Sahil Subhash Solat
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////


int Difference(char *str)
{
    int iCapital = 0;
    int iSmall = 0;    
    if(str == NULL)
    {
        return 1;
    }

    while(*str != '\0')
    {
        if((*str >='a') && (*str<='z'))
        {
            iSmall++;
        }
        else if((*str >='A') && (*str<='Z'))
        {
            iCapital++;
        }
        str++;
    }
    return (iSmall - iCapital);
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

    iRet = Difference(Arr);

    printf("%d",iRet);
    return 0;
}

