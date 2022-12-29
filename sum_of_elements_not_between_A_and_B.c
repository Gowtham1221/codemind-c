#include<stdio.h>
int main()
{
    int n,i,a,b,s=0;
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
            s+=ar[i];
        }
    }
    printf("%d",s);
}