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
//  Function Name:  Range
//  Description:    It is use to display numbers of given 
//                  range
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           15/11/2025
//
/////////////////////////////////////////////////////////
void Range(int Arr[], int iLength,int iNo1,int iNo2)
{
    
    
    int iCnt = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iNo1 && Arr[iCnt]<iNo2)
        {
            printf("%d",Arr[iCnt]);
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
    int iSize = 0,iCnt = 0,iValue1=0,iValue2=0;
    int *p = NULL;

    printf("Enter number of element:\n");
    scanf("%d",&iSize);

    printf("Enter the starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point :\n");
    scanf("%d",&iValue2);

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
    Range(p, iSize,iValue1,iValue2);
   
    
    free(p);
    return 0;
}