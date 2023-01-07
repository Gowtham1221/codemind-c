#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0&&n!=i)
        {
            s+=i;
        }
    }
    if(s==n)
    {
        printf("PERFECT");
    }
    else if(s>n)
    {
        printf("ABUNDANT");
    }
    else
    {
        printf("DEFICIENT");
    }
}