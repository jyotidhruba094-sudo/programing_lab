#include<stdio.h>
int main()
{
        int choice;
        printf("enter choice where\n 1= addition\n 2= subtraction\n 3=multipliucation\n 4= division: ");
        scanf("%d", &choice);
        float num1, num2, c;
        printf("enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        switch( choice){
            case 1:
            c= num1+num2;
            printf("%f", c);\
            break;
            case 2:
            c= num1-num2;
            printf("%f", c);
            break;
            case 3:
            c= num1*num2;
            printf("%f",c);
            break;
            case 4:
            c=num1/num2;
            printf("%f", c);
            break;
            default:
            printf("invalid input");
            break;
        }
        return 0;
}