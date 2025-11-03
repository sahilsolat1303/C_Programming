class Logic{
    void findSmallesDigit(int num)
    {
        int iDigit = 0;
        int small = 9;
        while(num>0)
        {
            iDigit = num%10;
            if(iDigit<small)
            {
                small = iDigit;
            }
            num = num/10;
        }
        System.out.println("Largest no is:" +small);
    }
}
class program5 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.findSmallesDigit(45872);
    }
   
}
