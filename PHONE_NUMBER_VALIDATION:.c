#include<stdio.h>
int main()
{
    long n,r=0,c=0;
    scanf("%ld",&n);
    while(n!=0)
    {
        r=r+n%10;
        c++;
        n=n/10;
    }
    if(c==10&&r!=0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}