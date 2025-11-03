class Logic
{
    void checkDivisiable(int num)
    {
        if((num%5==0)&&(num%11==0))
        {
            System.out.println(num+ "Is divisible by 5 and 11");
        }
        else
        {
             System.out.println(num+ "Is not divisible by 5 and 11");
        }
    }
}

class program3 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.checkDivisiable(55);
    }
}
