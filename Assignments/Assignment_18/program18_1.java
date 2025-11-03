class Logic
{
    void checkPrime(int num)
    {
        int iCnt =0;
        int iFrequence = 0;
        for(iCnt=2;iCnt<(num/2);iCnt++)
        {
            if(num%iCnt==0)
            {
                iFrequence=iFrequence+1;
            }
        }
        if(iFrequence==0)
        {
            System.out.println(num+ "Number is prime");
        }
        else
        {
            System.out.println(num+ "Number is not prime");
        }
    }
}

class program1 {
    public static void main(String[] args) 
    {
            Logic obj = new Logic();
            obj.checkPrime(8);
    }
    
}
