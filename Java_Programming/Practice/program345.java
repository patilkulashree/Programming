import java.util.Scanner;
class program345
{
  public static int Summation(int arr[])
  {
     int icnt = 0 ,isum = 0;
     for(icnt = 0;icnt < arr.length ; icnt++)
     {
       isum = isum + arr[icnt];
     }return isum;
  }
   public static void main(String args[])
   {
     int icnt = 0,isize = 0,iRet = 0;
     int ptr[] = null;
     Scanner scanner = null;
     scanner = new Scanner(System.in);
     System.out.println("Enter the number of elements \n");
     isize = scanner.nextInt();
  
     //step 1 :allocate the memory
     ptr = new int[isize];

     //step 2: use the memory

     System.out.println("Enter the elements :\n");
     for(icnt = 0; icnt < ptr.length ;icnt++)
     {
         ptr[icnt] = scanner.nextInt();
     }

     System.out.println("Elements of the array are :");
     for(icnt = 0;icnt < ptr.length ; icnt++)
     {
        System.out.println(ptr[icnt]);
     }
     iRet = Summation(ptr);
     System.out.println("Addition is :"+iRet);
    
     //step 3 : deallocate the memory
     
      scanner = null;
      ptr = null;
      System.gc();
    }
}
