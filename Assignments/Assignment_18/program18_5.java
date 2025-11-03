class Logic
{
    void checkSign(int num)
    {
        if(num<0)
        {
            System.out.println(num + "Is the Negative");
        }
        else if(num == 0)
        {
             System.out.println(num + "Is the Zero");
        }
        else
        {
             System.out.println(num + "Is the Positive");
        }
   }
}

class program5 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}
