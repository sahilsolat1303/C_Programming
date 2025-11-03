class Logic
{
    void displayFactors(int num)
    {
        int iCnt = 0;
        for(iCnt=1;iCnt<num;iCnt++)
        {
            if(num%iCnt==0)
            {
                System.out.println("\n"+iCnt);
            }
        }
    }
}
class program3 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
    
}
