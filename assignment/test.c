#include<stdio.h>
int main(){
   float a;
   printf("enter the number: ");
   scanf("%f", &a);
   if ( a>0 ){
       printf(" the number is positive ");
   }
   if ( a<0 ){
       printf("the number is negative");
   }
   if ( a=0){
       printf("it is zero");
   }
    return 0;
}