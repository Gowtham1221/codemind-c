#include<stdio.h>
int main()
{
    int n,i,t,j;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                t=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}