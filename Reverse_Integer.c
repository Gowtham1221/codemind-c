#include<stdio.h>
int main()
{
    int n,r,s=0,q;
    scanf("%d",&n);
    q=n;
    while(n!=0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    printf("%d",s);
}