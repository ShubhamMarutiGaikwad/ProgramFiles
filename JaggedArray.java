import java.util.*;
import java.math.*;

public class JaggedArray 
{
    public static void main(String[] args)
    {    
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of row:");

        int Row = sobj.nextInt();
        
        int arr[][] = new int[Row][];
       
        for(int icnt =0;icnt<Row;icnt++)
        {   
            System.out.println("Enter the element for row:"+icnt);
            int column = sobj.nextInt();
            arr[icnt] = new int[column];
        }

        int A=Row;
       
        // Initializing array
        System.out.println("Enter the elements of the array: ");  
        for(int i=0; i<A; i++)  
        {   
           int B=column;
           for(int j=0;j<B;j++)
           {
              arr[i][j]=sobj.nextInt();
           }
        }  
 
        // // Displaying the values of 2D Jagged array
        // System.out.println("Elements of 2D Jagged Array");
        // for (int i = 0; i < arr.length; i++) 
        // {
        //     for (int j = 0; j < arr[i].length; j++) 
        //     {
        //         System.out.print(arr[i][j] + " ");
        //     }
        //     System.out.println();
        // }
    }
}