    // Write a program which accept number from user and print even factors of that number
    //input : 24
    //output : 2,4,6,8,12


    #include<stdio.h>

    void DisplayFactors(int ino)
    {
        int i = 0;
        if(ino<=0)
        {
            ino = -ino;
        }
        for(i = 1; i <= ino ; i++)
        {
            if((ino % i == 0) && (i % 2 == 0))
            {
                printf("%d",i);
            }
        }
    }
    int main()
    {
        int iValue = 0;
        printf("Enter number \n");
        scanf("%d",&iValue);

        DisplayFactors(iValue);
        return 0;
    }
