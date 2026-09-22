class Animal
{
  void sound()
   {
     System.out.println("Animal makes sound \n ");
    }
}
class Dog extends Animal
{
  @Override
  void sound()
  {
    System.out.println("Dog barks\n");
  }
}
public class Main
{
 public static void main(String[]args)
 {
   Animal a = new Dog();
   a.sound();
 }
}
