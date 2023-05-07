
class Base
{
    public int A;
    public Base()
    {
        System.out.println("Inside Base default constructor");
        this.A=11;
    }
    public Base(int i)
    { 
         System.out.println("Inside base parametrised constructor");
        this.A=11;
    }
    public void fun()
    {
        System.out.println("Inside base fun");
    }
}
class Derived extends Base
{  
    public int X;
    public Derived()
    {
        System.out.println("Inside Derived constructor");
        this.X=51;
    }
    public void gun()
    {
        System.out.println("Inside base fun");
        System.out.println("value of A:"+super.A);
        super.fun();
    }
}

class SuperDemo
{
    public static void main(String Arg[])
    { 
        Derived dobj =new Derived();   //No casting
        dobj.fun();
        dobj.gun();

        System.out.println(dobj.A);
        System.out.println(dobj.B);
        System.out.println(dobj.X);
        System.out.println(dobj.Y);


    }
}
