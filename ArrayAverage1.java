import java.util.*;
import java.math.*; 
class ArrayAverage1
{
    public static void main (String Arg[])
    {   
        Scanner  sobj = new Scanner(System.in);

        System.out.println("Enter the size of array:");

        int size = sobj.nextInt();

        int Arr[]=new int[size];

         System.out.println("Enter the array element:");
         int icnt =0;

         for(icnt =0;icnt<size;icnt++)
         {
            Arr[icnt]=sobj.nextInt();
         }
        int length = Arr.length;

        int sum = 0;

        for (int i = 0; i < Arr.length; i++)
        {
            sum += Arr[i];
        }
        double average = sum / length;
         
        System.out.println("Average of array : "+average);
 
    }
}