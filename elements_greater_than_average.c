#include<stdio.h>
int main()
{
    int n,i,max,av,s=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    av=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=av)
        {
            c++;
        }
    }
    printf("%d",c);
}