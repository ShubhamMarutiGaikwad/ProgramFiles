class Marvellous // class Marvellousextends Object
{
    public int No1;
    public int No2;
    public Marvellous()
    {   
        System.out.println("Inside default constructor");
        No1=0;
        No2=0;
    }
    public Marvellous(int a, int b)
    {
        System.out.println("Inside parametrised constructor");
        No1=a;
        No2=b;
    }
    protected void finalize()    // protected is compulsary 
    {
         System.out.println("Inside finalize method");
    }
}
class FinalizeDemo
{
    public static void main(String Arg[])
    {
        Marvellous mobj1 = new Marvellous();
        Marvellous mobj2 = new Marvellous(11,21);

        mobj1 = null;
        mobj2 = null;
        
        System.gc();
    }
}