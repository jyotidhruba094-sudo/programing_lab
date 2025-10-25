#include<stdio.h>
int main(){
    float a,b,c;
    printf("give your three numbers: ");
    scanf("%f %f %f" ,&a,&b,&c);
    if (a>b && a>c){
        printf("the largest number among given three");
        printf("%f", a);
    }
    if (b>a && b>c){
        printf("the largest number among the given three");
        printf("%f", b);
    }
    if (c>a && c>b){
        printf(" largest number among given three");
        printf("%f", c);
    }
    if (a==b && b==c){
        printf("all three numbers are equal");
    }
    return 0;
}