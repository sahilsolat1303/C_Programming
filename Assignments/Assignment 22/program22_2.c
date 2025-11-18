/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//
//  Function Name:  Frequency
//  Description:    It is use to count frequency of even
//                  number and odd number difference
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           14/11/2025
//
/////////////////////////////////////////////////////////
int Frequency(int Arr[], int iLength)
{
    
    int iCountodd = 0;
    int iCounteven = 0;
    int iCnt = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iCounteven ++;
        }
        else
        {
            iCountodd ++;
        }
    }
    return iCounteven-iCountodd;
}
/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of element:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if(NULL==p)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d element",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element:%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Frequency(p, iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0;
}