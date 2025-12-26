#include<stdio.h>
int main()
{
        float a;
        printf("enter the temperature of the machine: ");
        scanf("%f",&a);
        if( a>=60 && a<=82)
        {
            printf("temperature is in safe range");
        }
        else{
            printf("temperature warning");
        }
        return 0;
}