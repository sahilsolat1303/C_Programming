class Logic
{
    void countEvenOddRange(int n)
    {
        int iCnt = 0;
        int iCEven = 0;
        int iCOdd = 0;
        for(iCnt=1;iCnt<=n;iCnt++)
        {
            if(iCnt%2==0)
            {
                iCEven = iCEven+1;
            }
            else
            {
                iCOdd = iCOdd+1;
            }
        }
        System.out.println("Even count is:" +iCEven+ "\n" + "Odd count is:" +iCOdd);
    }
}
class program2 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}
