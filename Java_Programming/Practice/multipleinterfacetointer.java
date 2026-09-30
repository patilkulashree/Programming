interface Father
{
  void property();
}
interface Mother
{
 void education();
}
class Child implements Father,Mother
{
public void property()
{
  System.out.println("Father's property");
}
public void education()
{
 System.out.println("Mother's property");
}
}
 class Demo
{
 public static void main(String[]args)
{
 Child c=new Child();
 c.property();
 c.education();
}
}
