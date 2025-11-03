class Logic
{
    void calculatePower(int base, int exp)
    {
        int iCnt =0;
        int resulte = 1;
        for(iCnt=1;iCnt<=exp;iCnt++)
        {
            resulte = resulte*base;
        }
        System.out.println("Power is" +resulte);
    }
}

class program5 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
    
}
