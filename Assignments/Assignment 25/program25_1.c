/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//
//  Function Name:  Difference
//  Description:    It is use to sum of even and odd number
//                  difference
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           17/10/2025
//
/////////////////////////////////////////////////////////
int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iSumEven = iSumEven+Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd+Arr[iCnt];
        }
    }
    return (iSumEven - iSumOdd);
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
    iRet = Difference(p,iSize);
    printf("Result is %d",iRet);

    free(p);

    return 0;
}
