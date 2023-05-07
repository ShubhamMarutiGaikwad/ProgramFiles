import java.net.*;
import java.io.*;

class Server
{
    public static void main(String Arg[]) throws Exception
    {   
        System.out.println("serve application is running...");
        ServerSocket ssobj = new ServerSocket(2100);
        System.out.println("serve application is running at port no :2100");

        Socket s = ssobj.accept();
        System.out.println("serve and client connection is sucessful");

        PrintStream ps = new PrintStream(s.getOutputStream());

         BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
         BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
         
         
         String str1,str2;
         while((str1=br1.readLine()) != null)
         {
            System.out.println("Client says:"+str1);
            System.out.println("Enter message for client:");
            str2=br2.readLine();
            ps.println(str2);
         }
         System.out.println("Thank you for using chat Messanger...");


    }
}
