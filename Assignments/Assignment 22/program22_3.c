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
//  Description:    It is use to check 11 present or not 
//  Input:          integer
//  Output:         boolen
//  Author:         Sahil Subhash Solat
//  Date:           14/11/2025
//
/////////////////////////////////////////////////////////
bool Check(int Arr[], int iLength)
{
    
    
    int iCnt = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
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
    int iSize = 0,iCnt = 0;
    bool iRet = false;
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
    iRet = Check(p, iSize);
    if(iRet==true)
    {
        printf("11 is present");

    }
    else{
        printf("11 is absent");
    }
    
    free(p);
    return 0;
}