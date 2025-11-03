class Logic
{
    void checkPalindrome(int num)
    {
        int iDigit = 0;
        int iRev = 0;
        int teamp = num;
        while(num!=0)
        {
            iDigit = num%10;
            iRev = iRev*10+iDigit;
            num = num/10;
        }
        if(iRev==teamp)
        {
            System.out.println(teamp+ "is palindrome number");
        }
        else
        {
             System.out.println(teamp+ "is not palindrome number");
        }
    }
}

class program2 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }   
}
