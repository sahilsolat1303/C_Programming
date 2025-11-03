class Logic
{
    void printTable(int num)
    {
        int iCnt = 0;
        for(iCnt=1;iCnt<=10;iCnt++)
        {
            System.out.println(num+ "x" +iCnt+ "=" +num*iCnt );
        }
    }
}

class program5 {
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}
