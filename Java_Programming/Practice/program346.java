import java.util.Scanner;
class program346
{
   public static int Summation(int arr[])
   {
     int icnt = 0,isum = 0;
     for(icnt = 0;icnt < arr.length ; icnt++)
     {
        isum = isum + arr[icnt];
     }return isum;
   }
   public static float Average(int arr[])
   {
     int icnt= 0 ,isum = 0;
     for(icnt = 0;icnt < arr.length ; icnt++)
     {
       isum = isum + arr[icnt];
     }return ((float)isum / (float)arr.length);
   }
   public static void main(String args[])
   {
     int icnt = 0,isize = 0, iret = 0;
     float fret = 0.0f;
     int ptr[] = null;
     Scanner scanner = null;
     scanner = new Scanner(System.in);
     System.out.println("Enter the number of elements you want :\n");
   
     isize = scanner.nextInt();
     
     //step 1 : allocate the memory 
     ptr = new int [isize];
   

     //step 2 : use the memory
     System.out.println("Enter the elements \n");
     for(icnt = 0;icnt < isize ; icnt++)
     {
       ptr[icnt]=scanner.nextInt();
     }
     for(icnt = 0 ;icnt < isize ;icnt++)
     {
      System.out.println(ptr[icnt]);
     }
     iret = Summation(ptr);
     System.out.println("Addition is :" +iret);
     fret = Average(ptr);
     System.out.println("Average is :" +fret);
   
     //step 3 : deallocate the memory
     scanner = null;
     ptr = null;
     System.gc();
   }
}

