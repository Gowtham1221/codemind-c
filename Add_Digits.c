#include<stdio.h>
int main()
{
    int n,i,s,r;
    scanf("%d",&n);
    while(n>9)
    {
        s=0;
        while(n>0)
        {
          r=n%10;
          s+=r;
          n/=10;
        }
        n=s;
    }
    printf("%d",s);
}