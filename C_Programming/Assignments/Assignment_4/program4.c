//Problem statement : Accept thr age of a person and determine whether the person is elgible to vote.A person must be at least 18 years to vote.A negative age shoukd be considered invalid

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
     if(iAge < 0)
     {
        printf("Invalid Age \n");
     }
     else if (iAge >= 18)
     {
        printf("Eligible for voting \n");
     }
     else 
     {
        printf("Not Eligible for voting \n");
     }
}
int main()
{
    int iAge = 0;
    printf("Enter your age :");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);
    return EXIT_SUCCESS;
}