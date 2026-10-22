//Accept the age the age of a person and determine whether the person is eligible to vote .A person must be at least 18 years old to vote .A negetive age should be considered invalid

#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
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
