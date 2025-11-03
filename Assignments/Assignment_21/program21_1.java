class Logic{
    void productofDigits(int num)
    {
        int iDigit = 0;
        int multi = 1;
        while(num!=0)
        {
            iDigit = num%10;
            multi = multi*iDigit;
            num = num/10;
        }
        System.out.println("Product of Digits is:" +multi);
    }
}
class program1 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.productofDigits(234);
    }
    
}
