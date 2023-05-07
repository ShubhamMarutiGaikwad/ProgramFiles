class Demo   // Final class can inherit other class
{
   // Code
}
final class Base extends Demo
{
   //code
}
class Derived extends Base   // error: cannot inherit from final Base
{
   // code
}

class Final3
{
  public static void main(String Arg[])
  {
    Base bobj = new Base();
  }
}

