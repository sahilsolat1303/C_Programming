/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//
//  Function Name:  DigitsSum
//  Description:    It is use to sum of digit of each number
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           16/10/2025
//
/////////////////////////////////////////////////////////
void DigitsSum(int Arr[], int iLength)
{
    int i = 0,iDigit = 0,iSum=0,temp=0;

    for(i = 0; i < iLength; i++)
    {
       iSum =0;
       temp = Arr[i];
       while(temp != 0)       
        {
            iDigit = temp % 10;
            iSum = iSum + iDigit;
            temp = temp / 10;
           
        }
         printf("%d\t",iSum);
       
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

    DigitsSum(p, iSize);

    free(p);

    return 0;
}
