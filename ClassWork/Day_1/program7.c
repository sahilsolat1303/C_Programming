#include<stdio.h>

int add(int iNo1, int iNo2)
{
    int iSum = 0;   //Local variable
    iSum = iNo1+iNo2;    //business logic
    return iSum;

}

int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    printf("Enter the frist Number:\n");
    scanf("%d",&iValue1);

    printf("Enter the second Number:\n");
    scanf("%d",&iValue2);

    iRet = add(iValue1,iValue2);    // method call

    printf("Addition is:%d\n",iRet);

    return 0;

}