/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//
//  Function Name:  Digits
//  Description:    It is use to display 3 digit numbers
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           16/10/2025
//
/////////////////////////////////////////////////////////
void Digits(int Arr[], int iLength)
{
    int i = 0, iTemp = 0, iCnt = 0;

    for(i = 0; i < iLength; i++)
    {
        iTemp = Arr[i];
        iCnt = 0;

        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp / 10;
        }

        if(iCnt == 3)    
        {
            printf("%d ", Arr[i]);
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
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}
