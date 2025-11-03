class Logic
{
    void FindMax(int a, int b)
    {
        if(a>b)
        {
            System.out.println(a+ "is greter than " +b);
        }
        else
        {
            System.out.println(b+ "is greter than " +a);
        }
    }
}

class program3 {
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.FindMax(20, 15);
        
    }
}
