#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq;
    scanf("%d",&n);
    sq=sqrt(n);
    if(sq*sq==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}