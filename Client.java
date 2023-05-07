import java.net.*;
import java.io.*;

class Client
{
    public static void main(String Arg[]) throws Exception 
    {   
        System.out.println("Client application is running...");

         System.out.println("Client is waiting for connection");
         Socket s = new Socket("localhost",2100);

         PrintStream ps = new PrintStream(s.getOutputStream());

         BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getOutputStream()));
         BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
         
         System.out.println("Chat messangeer started");
         String str1,str2;
         while(!(str1 = br2.readLine()).equals("end"))
         {
              ps.println(str1);
              
              str2 = br1.readLine();
              System.out.println("Server says:"+str2);
         }
         System.out.println("Thank you for using chat Messanger...");
    }
}
