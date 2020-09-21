#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Getting input number from user//
    int i,num,sum=0;
    printf("Enter a number between 0 and 1000 : ");
    scanf(" %d",&num);
    // Checkig wheter the number perfect or not //
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    //cheking the sum of the divisors euals sum or not//
    if(sum==num)
    {
        printf("The number %d is perfect",num);
    }
    else
    {
        printf("The number %d is not perfect",num);
    }
    return 0;
}
