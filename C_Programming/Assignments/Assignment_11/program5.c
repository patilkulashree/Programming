    #include<stdio.h>
    #include<stdlib.h>
    void RangeDisplay(int iStart,int iEnd)
    {
        if(iStart < 0 || iEnd < 0 || iStart>iEnd)
        {
            printf("Invalid Number \n");
            return;
        }
        int iCnt = 0 , iSum = 0 ;
        for(iCnt = iEnd ; iCnt >= iStart ; iCnt--)
        {
            printf("%d\t",iCnt);
        }
    }
    int main()
    {
        int iValue1 = 0,iValue2 = 0;

        printf("Enter starting point :\n");
        scanf("%d",&iValue1);

        printf("Enter ending point :\n");
        scanf("%d",&iValue2);

        RangeDisplay(iValue1,iValue2);

        return EXIT_SUCCESS;
    }