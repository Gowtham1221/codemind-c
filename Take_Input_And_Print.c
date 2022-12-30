#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    fgets(s,20,stdin);
    printf("%s",s);
    return 0;
}