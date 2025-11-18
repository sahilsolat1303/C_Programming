/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////
//
//  Function Name:  FirstOcc
//  Description:    It is use to count first occurrence of 
//                  number
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           15/11/2025
//
/////////////////////////////////////////////////////////
int FirstOcc(int Arr[], int iLength,int iNo)
{
    
    
    int iCnt = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            return iCnt;
            
        }
        
    }
        return -1;
            
}
/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////
int main()
{
    int iSize = 0,iCnt = 0,iValue=0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of element:\n");
    scanf("%d",&iSize);

    printf("Enter number :\n");
    scanf("%d",&iValue);

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
    iRet = FirstOcc(p, iSize,iValue);
    if(iRet==-1)
    {
        printf("There is no such number");

    }
    else{
        printf("First occurrence of number is%d",iRet);
    }
    
    free(p);
    return 0;
}