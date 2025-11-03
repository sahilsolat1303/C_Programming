
/*
  step1: Uderstand the problem statement 
  step2: write the algorithm
  step3: Deside wich language is use
  step4: Write a program
  step5: Test the program

*/

/*
   
   Algorithm
   START 
        Accept frist number as No1
        Accept second number as No2
        performaddition of No1 and No2
        Display the addition on screen
    STOP

*/

#include<stdio.h>
float AdditionTwoNumber(float fNo1, float fNo2)
{
    float fSum = 0.0f;   //Local variable
    fSum = fNo1+fNo2;    //business logic
    return fSum;

}

int main()
{
    float fValue1=0.0f,fValue2=0.0f,fRet=0.0f;

    printf("Enter the frist Number:\n");
    scanf("%f",&fValue1);

    printf("Enter the second Number:\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumber(fValue1,fValue2);    // method call

    printf("Addition is:%f\n",fRet);

    return 0;

}