#include<stdio.h>
int main()
{
    int n,sq,r=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        r=r+sq%10;
        sq=sq/10;
    }
    if(r==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}