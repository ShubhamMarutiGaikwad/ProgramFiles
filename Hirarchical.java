
class Base
{
    public int A;
    public int B;
    public Base()
    {
        System.out.println("Inside Base constructor");
        this.A=11;
        this.B=21;
    }
    public void fun()
    {
        System.out.println("Inside base fun");
    }
}
class Derived extends Base
{  
    public int X;
    public int Y;
    public Derived()
    {
        System.out.println("Inside Derived constructor");
        this.X=51;
        this.Y=101;
    }
    public void gun()
    {
        System.out.println("Inside base fun");
    }
}

class DerivedX extends Base
{
    public int Z;

    public DerivedX()
    {
        System.out.println("Inside DerivedX Constructor");
        this.Z=111;
    }
}

class Hirarchical
{
    public static void main(String Arg[])
    { 
        DerivedX dobj =new DerivedX();   //No casting
        dobj.fun();
       // dobj.gun();

        System.out.println(dobj.A);  //11
        System.out.println(dobj.B);  //21
        // System.out.println(dobj.X);  //51
        // System.out.println(dobj.Y);  //101
        System.out.println(dobj.Z);  //111


    }
}
 //Base bobj = new Base();      // No casting

 // Base bobj2 = new Derived();    //Upasting
        // Derived  dobj2 = new Base();  // Downcasting