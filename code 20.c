#include<stdio.h>
int main()
{
    int i;
    int isprime=1;
    printf("ENTER THE NUMBER:");
    scanf("%d",&i);
    for(int j = 2; j< i; j++)
    {
        if(i%j==0)
        {
            isprime =0;
            break;
        }
    }
    if(isprime == 1){
        printf("is prime ");
    }
    else
    {
        printf("is not prime : ");
    }
    return 0;
}
