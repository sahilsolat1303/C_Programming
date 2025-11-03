class Logic{
    void reverseNumber(int num)
    {
        int iDigit = 0;
        int iRev =0;
        while(num !=0)
        {
            iDigit = num%10;
            iRev = iRev*10+iDigit;
            num = num/10;
        }
        System.out.println("Answer " +iRev);
    }
}

class program4 {
    public static void main(String[] args) {
       Logic obj = new Logic();
       obj.reverseNumber(1234);
    }
    
}
