#include<stdio.h>
int main()
{
        float bill, unit;
        printf("enter unit consumed: ");
        scanf("%f", &unit);
        if( unit<100)
        {
                bill= unit*1.5;
                printf("the net bill %f", bill);
        }
        else if( unit>=100 && unit<=200)
        {
                bill= 100*1.5+ (unit-100)*2;
                printf("the net bill %f", bill);
        }
        else if( unit>=201 && unit<=300)
        {
                bill= 100*1.5+ 100*2+ (unit-200)*3 ;
                printf("the net bill is %f", bill);
        }
        else if( unit>300)
        {
                bill=100*1.5+ 100*2+ 100*3+ (unit-300)*5 ;
                printf("the net bill %f", bill);
        }
        return 0;
}
