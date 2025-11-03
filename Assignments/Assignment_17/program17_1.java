class Logic
{
    void SumOfDigit(int num)
    {
        int iSum = 0;
        int iDigit = 0;
        while (num != 0)
        {
            iDigit = num%10;
            iSum = iSum + iDigit;
            num = num/10;    
        }
        System.out.println("Sum of Digit is" +iSum);
    }
}

class program1 {
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.SumOfDigit(1234);
    }
    
}
