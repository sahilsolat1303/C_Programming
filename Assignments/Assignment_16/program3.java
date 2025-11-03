class Logic{

    void findFactorial(int num)
    {
        int iCnt =0;
        int iFact =1;
        for(iCnt=1;iCnt<=num;iCnt++)
        {
            iFact = iFact*iCnt;
        }
        System.out.println(num+ " Factorial is"  +iFact);
    }
}

class program3 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }
    
}
