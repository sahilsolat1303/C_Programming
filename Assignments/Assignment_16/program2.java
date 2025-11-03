class Logic {
    void checkEvenOdd(int num)
    {
        if(num%2==0)
        {
            System.out.println(num+ "Is Even number");

        }
        else
        {
            System.out.println(num+ "Is Odd number");
        }
    }

    
}

class program2 {
    public static void main(String[] args) {
        
        Logic obj = new Logic();
        obj.checkEvenOdd(7);
        
    }
}
