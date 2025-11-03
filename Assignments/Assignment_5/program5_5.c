/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                                        //input output

/////////////////////////////////////////////////////////
//
//  Function Name:  FindLargest
//  Description:    It is use to find largest among three
//                  number
//  Input:          integer
//  Output:         integer
//  Author:         Sahil Subhash Solat
//  Date:           18/10/2025
//
/////////////////////////////////////////////////////////

int FindLargest(
                    int x,                                               //Frist input
                    int y,                                               //Second input
                    int z                                                //Third input
                )
{
    if((x>y) && (x>z))
    {
        return x;
    }
   else if((y>x) && (y>z))
   {
        return y;
   }
   else
   {
        return z; 
   }

}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{

    int a,b,c;                                                           // To accepet input
    int result;                                                          // To Store the result
    
    printf("Enter the three number:\n");
    scanf("%d %d %d",&a,&b,&c);

    result = FindLargest(a,b,c);                                         // Function call
    printf("Largest Number is:%d\n",result);

    return 0;
}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 10   100     43
//
//  output: Largest Number is:100
//
//  input: 76   47      98
//
//  outpute:  Largest Number is:98
//
/////////////////////////////////////////////////
