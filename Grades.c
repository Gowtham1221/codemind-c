#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,p;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    p=(s1+s2+s3+s4+s5)/5;
    if(p>=90)
    printf("Grade A");
    else if(p>=80&&p<90)
    printf("Grade B");
    else if(p>=70&&p<80)
    printf("Grade C");
    else if(p>=60&&p<70)
    printf("Grade D");
    else if(p>=40&&p<60)
    printf("Grade E");
    else
    printf("Grade F");
}