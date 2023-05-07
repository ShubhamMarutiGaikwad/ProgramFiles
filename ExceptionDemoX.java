import java.util.Scanner;

class ExceptionDemoX
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int No1=0, No2=0;
        float Ans=0.0f;

        System.out.println("Enter first Number:");
        No1 = sobj.nextInt();

        System.out.println("Enter second Number:");
        No2 = sobj.nextInt();
        
        try                
        {   
            System.out.println("Inside try block");
             Ans = No1/No2; // actual operation which may generate exception
        }
        catch(ArithmeticException obj)
        {
           System.out.println("Exception occured & code is inside catch block :"+obj);      
        }
        finally 
        {
            System.out.println("code is inside finally block ...");
            System.out.println("Division is:"+Ans);

        }
        
    }
}

//try = try to compile the code