#include<stdio.h>
// dynamic function
void Display(int iFrequence)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=iFrequence; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}



int main() 
{
    int iCount = 0;
    printf("Enter the frequence:\n");
    scanf("%d",&iCount);

    Display(iCount);  
    return 0;
}
