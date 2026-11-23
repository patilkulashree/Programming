import java.util.Scanner;
class program342
{
  public static void main(String []args)
  {
    int arr[] = new int[5];
    int icnt = 0;
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter the elements :\n");
    for(icnt = 0;icnt < arr.length ;icnt++)
    {
      arr[icnt]=scanner.nextInt();
    }
    System.out.println("Elements of the array are :");
    for(icnt = 0;icnt <arr.length ;icnt++)
    {
      System.out.println(arr[icnt]);
    }
   }
}

