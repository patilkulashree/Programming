import java.util.Scanner;
class program166
{
  static int sumdigits(int ino)
  {
    int idigit = 0, isum = 0;
    if(ino < 0)
    {
     ino = -ino;
    }
    while(ino != 0)
    {
      idigit = ino % 10;
      isum = isum + idigit ;
      ino = ino / 10;
    }
     return isum;
  }
  public static void main(String args[])
  {
    int ivalue = 0 , iret = 0;
    Scanner sc = new Scanner(System.in);
    System.out.println(" Enter Number ");
    ivalue = sc.nextInt();
    iret = sumdigits(ivalue);
    System.out.println("Summation of digits is :"+iret);
    
   }
}
 
