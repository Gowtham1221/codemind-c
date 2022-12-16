#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s=0,sq,sn=0,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sq=i*i;
        s=s+sq;
    }
    for(i=1;i<=n;i++)
    {
        sn=sn+i;
    }
    x=pow(sn,2);
    printf("%d",x-s);
}