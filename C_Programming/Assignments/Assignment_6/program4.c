#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iside1 ,int iside2,int iside3)
{

  if(iside1 > 0  && iside2 > 0 && iside3 > 0 )
  {
    if((iside1 + iside2 > iside3) &&
      (iside2 + iside3 > iside1 ) &&
      (iside1 + iside3 > iside2))
        {
             printf("Triangle is valid\n");
        }
    else
       {
             printf("Triangle is not valid\n");
       } 
  }
  else
  {
    printf("Triangle is not a valid \n");
  }

}
int main()
{
    int iside1 = 0, iside2 = 0, iside3 = 0;

    printf("Enter three sides : ");
    scanf("%d%d%d",&iside1,&iside2,&iside3);
    
    CheckTriangle(iside1,iside2,iside3);

    return EXIT_SUCCESS;
}