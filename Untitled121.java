import java.util.*;

public class JaggedArray 
{
    public static void main(String[] args)
    {   
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of row:");

        int Row = sobj.nextInt();
        
        int arr[][] = new int[Row][];

        for(int icnt =0;icnt<=Row;icnt++)
        {
            System.out.println("Enter the element for row:"+icnt);
            int column = sobj.nextInt();
            arr[icnt] = new int[column];
            //arr[][] = new int[][column];
        }
 
        // // First row has 4 columns
        // arr[0] = new int[4];
 
        // // Second row has 5 columns
        // arr[1] = new int[5];
 
        // Initializing array
        // int count = 0;
        // for (int i = 0; i < arr.length; i++)   //For Rows
        // {
        //     for (int j = 0; j < arr[i].length; j++)   //For Columns
        //     {
        //         arr[i][j] = count++;
        //     }
        // }
 
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