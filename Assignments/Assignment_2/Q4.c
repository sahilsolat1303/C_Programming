/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                               //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use print number in second 
//                  number times
//  Input:          integer, integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           16/10/2025
//
/////////////////////////////////////////////////////////


void Display(
                int iNo,                                          //Frist input
                int iFrequence                                    //Second input
            )
{
    int iNt =0;
    for(iNt=1;iNt<=iFrequence;iNt++)                              
    {
        printf("%d",iNo);
    }

}
/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue =0;                                                // To accepet input
    int iCount =0;                                                // To accepet input

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    printf("Enter Frequence:\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);                                      //Function call

    return 0;
}