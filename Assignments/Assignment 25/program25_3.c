/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to check number even or divisible 
//                  by  5 or not 
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           21/10/2025
//
/////////////////////////////////////////////////////////
void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0 & Arr[iCnt]%5==0)
        {
           
            printf("%d\t",Arr[iCnt]);
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
    int iSize = 0,  iCnt = 0;
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
    Display(p,iSize);
    

    free(p);

    return 0;
}
