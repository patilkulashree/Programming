//////////////////////////////////////////////////////////
// Function Name : Addition
// Input : Integer,Integer
// Output : Integer
// Description : Performs addition
// Date : 14/11/2026
// Author : Kulashree Pramod Patil 
/////////////////////////////////////////////////////////
import java.util.Scanner;
class program9
{
  static int addition(int ino1,int ino2)
  {
     int ians = 0;
     ians = ino1 + ino2;
     return ians;
  }
  public static void main(String []args)
  {
    int ivalue1 = 0 , ivalue2 = 0 , iresult = 0;
    
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter First Number :\n");
    ivalue1 = sc.nextInt();
 
    System.out.println("Enter Second Number : \n");
    ivalue2 = sc.nextInt();
   
    iresult = addition(ivalue1 ,ivalue2);
    
    System.out.println("Addition is :" + iresult);
    sc.close();
  }
}
