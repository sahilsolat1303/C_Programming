/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display alphabets if user provides Capital then 
//                  prints onwards character and if user enter small 
//                  then reverse character.
//  Input :         char
//  Output :        char
//  Auther :        Sahil Subhash Solat
//  Date :          28/11/2025
//
//////////////////////////////////////////////////////////////////
void Display(char ch)
{    
    if((ch>='a') && (ch<='z'))
    {
        int iCnt=0;
        for(iCnt=ch;ch>='a';iCnt--)
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else if((ch>='A') && (ch<='Z'))
    {
        int iCnt=0;
        for(iCnt=0;ch<='Z';iCnt++)
        {
            printf("%c\t",ch);
            ch++;
        }
    }
    
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

