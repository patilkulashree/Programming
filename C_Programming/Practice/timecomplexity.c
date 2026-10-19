    #include<stdio.h>
    #include<stdlib.h>


    void CheckPerfect(int ino)
    {
       int iCnt=0,iSum=0;

      for (iCnt = 1 ; iCnt <= ino/2 ; iCnt++)
        {

            if(ino % iCnt == 0)
            {
                iSum = iSum +iCnt;
            }
        }
        if(iSum == ino)
        {
            printf("It is perfect number\n");
        }
        else
        {
            printf("It is not a perfect number \n");
        }
        
    }
    int main()
    {
        int iValue = 0;
    
        printf("Enter number : \n");
        scanf("%d",&iValue);
        
        CheckPerfect(iValue);
        
        

        return EXIT_SUCCESS;
    }
    // Time Complexity : O(N/2)