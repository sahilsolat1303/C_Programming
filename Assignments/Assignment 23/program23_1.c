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
//  Function Name:  Check
//  Description:    It is use to check given number is 
//                  present or not 
//  Input:          integer
//  Output:         boolen
//  Author:         Sahil Subhash Solat
//  Date:           15/11/2025
//
/////////////////////////////////////////////////////////
bool Check(int Arr[], int iLength,int iNo)
{
    
    
    int iCnt = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            return true;
            break;
        }
       
            
        
    }
    return false;
}
/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////
int main()
{
    int iSize = 0,iCnt = 0,iValue=0;
    bool iRet = false;
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
    iRet = Check(p, iSize,iValue);
    if(iRet==true)
    {
        printf("number is present");

    }
    else{
        printf("number is not present");
    }
    
    free(p);
    return 0;
}