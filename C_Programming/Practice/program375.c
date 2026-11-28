#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Bi-Directional Search
bool SearchElement(int Arr[],int ilength,int ino)
{
  int iStart = 0,iEnd = 0;
  bool bFlag = false;
  iStart = 0;
  iEnd = ilength - 1;
  
  while(iStart <= iEnd)
  {   
      if((Arr[iStart] == ino) || (Arr[iEnd] == ino))
       {
           bFlag = true;
           break;  //Early Exit
       }
       iStart++;
       iEnd--;
  }return bFlag;
}
int main()
{
  int *ptr = NULL,ino = 0;
  int isize = 0,icnt = 0,iret = 0,ivalue = 0;
  bool bret = false;

  printf("Enter number of elements :\n");
  scanf("%d",&isize);
  
  ptr = (int *)malloc(isize * sizeof(int));
  if(NULL == ptr)
  {
    printf("Error : Unable to allocate memory :\n");
    return  EXIT_FAILURE;
  }

  printf("Enter the elements :\n");
  for(icnt = 0;icnt < isize ;icnt++)
  {
    scanf("%d",&ptr[icnt]);
  }
  printf("Enter the number that you want t search :\n");
  scanf("%d",&ivalue);

  bret = SearchElement(ptr,isize,ivalue);
  if(bret == true)
  {
     printf("It is there ");
  }
  else
  {
    printf("it is not there ");
  }
  free(ptr);
  return EXIT_SUCCESS;
}


  
  

  
 