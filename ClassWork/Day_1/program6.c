#include<stdio.h>

int add(int a, int b)
{
    int sum = 0;   //Local variable
    sum = a+b;    //business logic
    return sum;

}

int main()
{
    int i=0,j=0,ans=0;

    printf("Enter the frist Number:\n");
    scanf("%d",&i);

    printf("Enter the second Number:\n");
    scanf("%d",&j);

    ans = add(i,j);    // method call

    printf("Addition is:%d\n",ans);

    return 0;

}