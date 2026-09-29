abstract class Base
{
  public int i,j;
  public int Addition(int no1,int no2)
  {
       return no1+no2;
  }
  public abstract int substraction(int no1,int  no2); //abstract method
}

class Derived extends Base
{
  public int x;
  public int Substraction(int no1,int no2)
  {
    return no1-no2;
  }
 public int Multiplication(int no1,int no2)
 {
   return no1*no2;
 }
}
class AbstractDemo
{
  public static void main(String []args)
  {
    Derived dobj=new Derived();
    int Ret=0;
    Ret=dobj.Addition(10,11);
    System.out.println("Addition is :"+Ret);
    Ret=dobj.Substraction(10,11);
    System.out.println("Substraction is :"+Ret);
    Ret=dobj.Multiplication(10,11);
    System.out.println("Multiplication is :"+Ret);
  }
}

