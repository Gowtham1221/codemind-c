#include<stdio.h>
int main()
{
    int l,b,w,c,f1,f2,p;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    f1=(l+2*w)*(b+2*w);
    f2=l*b;
    p=(f1-f2)*c;
    printf("%d",p);
    
}