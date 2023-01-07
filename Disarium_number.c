#include<stdio.h>
#include<math.h>
int num(int n)
{
    int c=0;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
     return c;
}
int main()
{
    int n,r,s=0,q,p;
    scanf("%d",&n);
    p=num(n);
    q=n;
    while(n!=0)
    {
        r=n%10;
        s=s+pow(r,p);
        n=n/10;
        p--;
    }
    if(s==q)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}