class Logic
{
    void findMin(int a, int b, int c)
    {
        if(a<b && a<c)
        {
            System.out.println(a+ "is Minimum");
        }
        else if(b<a && b<c)
        {
            System.out.println(b+ "is Minimum");
        }
        else
        {
            System.out.println(c+ "is Minimum");
        }
    }
}

class program4 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }
}
