/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description :   Check the vowels are present in the character or not.
//  Input :         String
//  Output :        char
//  Auther :        Sahil Subhash Solat
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////


typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    int iCapital = 0;
    int iSmall = 0;    
    if(str == NULL)
    {
        return 1;
    }

    while(*str != '\0')
    {
        if((*str =='a') || (*str=='e') || (*str == 'i') || (*str=='o') || (*str=='u'))
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    BOOL bRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);
    if(bRet==TRUE)
    {
        printf("Contain Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    
    return 0;
}