class Logic {
    void calculateSum(int n)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt=1;iCnt<=n;iCnt++)
        {
            iSum = iSum+iCnt;
        }
        System.out.println("Sum is: " + iSum);
    }

    
}
class program
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}