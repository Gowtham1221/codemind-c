#include<stdio.h>
int main()
{
    int n,i,t;
    scanf("%d%d",&t,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        printf("%d x %d = %d
",t,i,i*t);
    }
    return 0;
}