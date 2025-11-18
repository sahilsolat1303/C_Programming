/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//
//  Function Name:  Maximum
//  Description:    It is use to find largest number 
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           16/10/2025
//
/////////////////////////////////////////////////////////
int Maximum(int Arr[],int iLength)
{
    int iCnt = 0;
    int max = Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>max)
        {
            max = Arr[iCnt];
        }
        
    }
    return max;
}
/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////
int main()
{
    int iSize = 0 , iRet=0,iCnt=0;
    int *p = NULL;

    printf("Enter number of element:\n");
    scanf("%d",&iSize);

    // printf("Enter the number:\n");
    // scanf("%d",&iValue);

    p = (int *)malloc(iSize*sizeof(int));

    if(NULL==p)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d element",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Maximum(p,iSize);
    printf("Largest Number is %d",iRet);

    free(p);

    return 0;
}