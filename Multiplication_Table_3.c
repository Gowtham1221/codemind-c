#include<stdio.h>
int main()
{
    int a,b,n,i;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}