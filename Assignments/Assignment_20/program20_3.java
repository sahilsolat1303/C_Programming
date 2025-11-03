class Logic
{
    void CheckPerfect(int num)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt=1;iCnt<num;iCnt++)
        {
            if(num%iCnt==0)
            {
                iSum=iSum+iCnt;
            }
        }
        if(iSum == num)
        {
            System.out.println("number is perfect");
        }
        else
        {
            System.out.println("number is not perfect");
        }
    }
}
class program3 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.CheckPerfect(6);
    }
    
}
