class Logic
{
    void displayGrade(int marks)
    {

        if(marks>=90)
        {
            System.out.println("O Grade");
        }
        else if(marks>=80)
        {
            System.out.println("A Grade");
        }
        else if(marks>=70)
        {
            System.out.println("B Grade");
        }
        else if(marks>=50)
        {
            System.out.println("C Grade");
        }
        else if(marks>=40)
        {
            System.out.println("D Grade");
        }
        else 
        {
             System.out.println("Fail");

        }
    }
}

class program2
{
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}

    
