class Logic
{
    void countDigit(int num)
    {
        int iCount = 0;
        int iDigit = 0;
        while(num != 0)
        {
            iDigit = num%10;
            iCount = iCount+1;
            num = num/10;

        }
        System.out.println("Count of digit is" +iCount);
    }
}

class program5 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.countDigit(7865);
    }
}
