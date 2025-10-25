#include<stdio.h>
int main(){
   int n;
   int s;
   printf("enter a number for sum of all entered natural numbers: ");
   scanf("%d", &n);
   s= n*(n+1)/2;
   printf("the sum of the natural numbers %d", s);
    return 0;
}