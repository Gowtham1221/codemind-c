#include<stdio.h>
int main()
{
    int n,r=0,rm;
    scanf("%d",&n);
    while(n!=0)
    {
        rm=n%10;
        if(rm>r)
        {
            r=rm;
        }
        n=n/10;
    }
    printf("%d",r);
}