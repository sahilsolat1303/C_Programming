/////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////
//
//  Function Name:  AdditionTwoNumber
//  Description:    It is use to perform Addition
//  Input:          float,float
//  Output:         float
//  Author:         Sahil Subhash Solat
//  Date:           09/10/2025
//
/////////////////////////////////////////////////
float AdditionTwoNumber(
                            float fNo1,                   //frist input
                            float fNo2                    //second input
                        )
{
    float fSum = 0.0f;                                    //To store result
    
    if(fNo1<0.0f)                                         //updater
    {
        fNo1= -fNo1;
    }
    if(fNo2<0.0f)                                         //update
    {
        fNo2= -fNo2;
    }
    fSum = fNo1+fNo2;                                     //business logic
    return fSum;

}

/////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////
int main()
{
    float fValue1=0.0f,fValue2=0.0f;                      //To accepet input
    float fRet=0.0f;                                      //To store result

    printf("Enter the frist Number:\n");
    scanf("%f",&fValue1);

    printf("Enter the second Number:\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumber(fValue1,fValue2);             // method call

    printf("Addition is:%f\n",fRet);

    return 0;

}

/////////////////////////////////////////////////
//
//  Testcase handle by the Application
//  
//  input: 10.5     input: 3.2       output: 13.7
//  input: -10.5    input: 3.2       output: 13.7
//  input: 10.5     input: -3.2      output: 13.7
//  input: -10.5    input: -3.2      output: 13.7
//  input: 10.5     input: 0.0       output: 10.5
//
/////////////////////////////////////////////////