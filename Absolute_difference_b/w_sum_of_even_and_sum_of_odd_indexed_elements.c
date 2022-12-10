#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,e=0,o=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            e=e+a[i];
        }
        else
        {
            o=o+a[i];
        }
    }
    printf("%d",e-o);
}