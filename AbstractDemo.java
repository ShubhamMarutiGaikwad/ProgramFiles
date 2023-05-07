abstract class RBI
{
   public abstract int CalculateROI(); //Abstract method
   // virtual float CalculateROI()=0;
   
   public void DisplayRules()
   {
    System.out.println("You have to submit Aadhar Card and Pan Card");
    System.out.println("Minimum balance is 10,000");
   }
}
class SBI extends RBI
{
    public float CalculateROI()
    {
        return 5.7f;
    }
}

class BOM extends RBI
{
   public float CalculateROI()
    {
        return 7.7f;
    }
}

class AbstractDemo
{
  public static void main(String Arg[])
  {
      
      //RBI robj = new RBI();
      SBI sobj = new SBI();
      BOM bobj = new BOM();

      sobj.CalculateROI();
      bobj.CalculateROI();

      float fRet =0.0f;
      fRet = sobj.CalculateROI();
      System.out.println("ROI of SBI is:"+fRet);

      fRet = bobj.CalculateROI();
      System.out.println("ROI of BOM is:"+fRet);

  }
}

