#include<stdio.h>
int main()
{
    int n,i,n1=0,n2=1,n3;
    scanf("%d",&n);
    printf("%d %d ",n1,n2);
    for(i=1;i<=n-2;i++)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}