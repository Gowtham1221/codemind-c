#include<stdio.h>
int main()
{
    int n,a=1,b=2,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(n==c)
        {
            printf("True");
            break;
        }
    }
    if(n!=c)
    {
        printf("False");
    }
}