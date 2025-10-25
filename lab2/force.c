#include<stdio.h>
int main()
{
        float mass, acc, force;
        printf("enter mass and accelaration: ");
        scanf("%f %f", &mass, &acc);
        force= mass*acc;
        printf(" the net force is %f", force);
        return 0;
}