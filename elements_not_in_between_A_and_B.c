#include<stdio.h>
int main()
{
    int n,i,a,b,v=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(ar[i]>b||ar[i]<a)
        {
            printf("%d ",ar[i]);
            v++;
        }
    }
    if(v==0)
    printf("-1");
}