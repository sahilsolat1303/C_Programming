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
//  Function Name:  Product
//  Description:    It is use to product of all odd numbers
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           15/11/2025
//
/////////////////////////////////////////////////////////
int Product(int Arr[], int iLength)
{
    
    
    int iCnt = 0;
    int multi = 1;
    bool flag = false;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2!=0)
        {
            multi = multi*Arr[iCnt];
            flag = true;
        }
    }
    if(flag==false)
    {
        return 0;
    }
    else
    {
        return multi;
    }
            
        
}
    
/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iCnt = 0;
    int iRet = 0;
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
    iRet = Product(p, iSize);

    printf("Product is %d",iRet);
   
    
    free(p);
    return 0;
}