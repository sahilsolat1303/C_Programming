class Logic
{
    void countFactors(int num)
    {
        int iCfact =0;
        int iCnt = 0;
        for(iCnt=1;iCnt<num;iCnt++)
        {
            if(num%iCnt==0)
            {
                iCfact = iCfact+1;
            }
        }
        System.out.println("Count is:" +iCfact);
    }
}
class program4 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}
