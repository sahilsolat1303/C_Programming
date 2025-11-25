/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////



#include<stdio.h>                                                       //Input output

/////////////////////////////////////////////////////////
//
//  Function Name:  Pattern
//  Description:    It is use to print pattern
//  Input:          integer
//  Output:         *,#
//  Author:         Sahil Subhash Solat
//  Date:           22/11/2025
//
/////////////////////////////////////////////////////////

void Pattern(
                int iRow,                                               //Frist input
                int iCol                                                //Second input
            )
{
    int i = 0;
    int j = 0;
    if(iRow!=iCol)
    {
            printf("Invalid Input\n");
            printf("Row number and column number shoulde be same");
            return;
    }
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(j==(iCol-i+1))
            {
                printf("#\t");

            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue1,iValue2=0;                                              // To accepet input
    printf("Enter the number of rows:\n");
    scanf("%d",&iValue1);
    printf("Enter the number of Columns:\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);                                           // Function call
    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 5     input: 5       
//
//  output: 
//
//  *       *       *       *       #
//  *       *       *       #       *
//  *       *       #       *       *
//  *       #       *       *       *
//  #       *       *       *       *
//  
/////////////////////////////////////////////////
