#include<stdio.h>
int main()
{
    float u,c,sc,total,amt=0.00;
    scanf("%f",&u);
    if(u<200)
    {
        c=1.20;
        amt=u*1.20;
        total=amt;
    }
    else if(u>=200&&u<400)
    {
        c=1.40;
        amt=u*1.40;
        total=amt;
    }
    else if(u>=400&&u<600)
    {
        c=1.60;
        amt=u*1.60;
        sc=amt*0.15;
        total=amt+sc;
    }
    else if(u>=600&&u<800)
    {
        c=1.80;
        amt=u*1.80;
        sc=amt*0.15;
        total=amt+sc;
    }
    else
    {
        c=2.00;
        amt=u*2.00;
        sc=amt*0.15;
        total=amt+sc;
    }
    printf("Units Consumed: %.0f
",u);
    printf("Cost per Unit: %.2f
",c);
    printf("Bill: %.2f
",amt);
    printf("Surcharge: %.2f
",sc);
    printf("Total Amount: %.2f
",total);
}