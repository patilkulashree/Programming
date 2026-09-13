import java.util.ArrayList;
public class Main
{
  public static void main(String[]args)
  {
    ArrayList<String> names =new ArrayList<>();
    names.add("Omkar");
    names.add("Rahul");
    names.add("Amit");
    names.add("Sneha");

   //Display Collection

   System.out.println("Names : "+names);
  
   //Access element

   System.out.println("First name : "+names.get(0));
   names.remove("Rahul");
   
   System.out.println("Size :"+names.size());
   }
}

   