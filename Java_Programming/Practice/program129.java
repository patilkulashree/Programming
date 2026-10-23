import java.util.Scanner;

class program129
{
    public static void main(String []arsg)
    {
      Scanner scanner = new Scanner(System.in);
      int iRet=0;
      Digit digit = new Digit();

      System.out.println("Enter number :");
      int iValue = scanner.nextInt();
      iRet= digit.sumdigits(iValue); 
      System.out.println("Summation of digits :"+iRet);
    }
}
class Digit
{
    public int sumdigits(int ino)
    {
        
        int iSum = 0;
        if(ino <= 0)
        {
            ino = -ino; 
        }
        while(ino!=0)
        {

            iSum=iSum + ino%10;
            ino = ino/10; 
                       
        }
        return iSum;
    }
    
 }       
 