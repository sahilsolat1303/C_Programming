/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
//
//  Function Name:  DisplaySchedule
//  Description:    Display exam shedule accepting division
//                  of the class.
//  Input:          char
//  Output:         char
//  Author:         Sahil Subhash Solat
//  Date:           27/11/2025
//
/////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
        if((chDiv =='a' || chDiv =='A'))
        {
            printf("Your exam at 7 AM");
        }
        else if((chDiv =='b' || chDiv =='B'))
        {
            printf("Your exam at 8.30 AM");
        }
        else if((chDiv =='c' || chDiv =='C'))
        {
            printf("Your exam at 9.20 AM");
        }
        else if((chDiv =='d' || chDiv =='D'))
        {
            printf("Your exam at 10.30 AM");
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
    BOOL bRet = FALSE;

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}

