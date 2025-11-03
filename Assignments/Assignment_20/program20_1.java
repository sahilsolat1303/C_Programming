class Logic
{
    void sumEvenNumber(int n)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt=1;iCnt<=n;iCnt++)
        {
            if(iCnt%2==0)
            {
                iSum = iSum+iCnt;
            }

        }
        System.out.println("Sum of Even number is" +iSum);
    }
}
class program1 {
        
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.sumEvenNumber(10);
    }
}
