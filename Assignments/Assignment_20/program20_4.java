class Logic{
    void findLargesDigit(int num)
    {
        int iDigit = 0;
        int largest = 0;
        while(num!=0)
        {
            iDigit = num%10;
            if(iDigit>largest)
            {
                largest = iDigit;
            }
            num = num/10;
        }
        System.out.println("Largest no is:" +largest);
    }
}
class program4 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.findLargesDigit(83429);
    }
   
}
