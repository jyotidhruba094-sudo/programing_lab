#include<stdio.h>
int main()
{
        float mass, vel, KE;
        printf("enter mass in Kg and the velocity in m/s: ");
        scanf("%f %f", &mass, &vel);
        KE= mass*vel* 0.5;
        printf("the kinetic energy is %f", KE);
        return 0;
}