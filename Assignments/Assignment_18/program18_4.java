class Logic
{
    void sumEvenOddDigits(int num)
    {
        int iDigit = 0;
        int iSumEven = 0;
        int iSumOdd = 0;

        while(num!=0)
        {
            iDigit=num%10;
            if(iDigit%2==0)
            {
                iSumEven = iSumEven+iDigit;
            }
            else
            {
                
                iSumOdd = iSumOdd+ iDigit;
            }
            num=num/10;
        }
        System.out.println("Sum of Even digit" + iSumEven);
        System.out.println("Sum of Odd digit" + iSumOdd);
    }
}

class program4 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
    
}
