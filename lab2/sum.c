#include<stdio.h>
int main()
{
        float num1, num2, sum;
        printf("enter two numbers whom to sum: ");
        scanf("%f %f", &num1, &num2);
        sum= num1 + num2;
        printf("%f", sum);
        return 0;
}