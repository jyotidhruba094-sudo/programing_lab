#include<stdio.h>
int main()
{
        float a,b;
        printf("enter tensile strength of first one: ");
        scanf("%f",&a);
        printf("enter tensile strength of 2nd one: ");
        scanf("%f", &b);
        if(a > b)
        {
            printf("first one has more tensile strength");
            
        }
        else if(a==b)
        {
            printf("both has same tensile strength");
        }
        else{
            printf("2nd one has more tensile strength");
        }
        return 0;
}