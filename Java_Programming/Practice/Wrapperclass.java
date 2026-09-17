class Wrapperclass
{
  public static void main(String args[])
  {
    int a=10;//primitive data type
    Integer obj=a;//autoboxing : int to Integer
    int b = obj; //unboxing : Integer to int
    
    System.out.println("Primitive value : "+a);
    System.out.println("Wrapper object:"+obj);
    System.out.println("Unboxed value :"+b);
  }
}
