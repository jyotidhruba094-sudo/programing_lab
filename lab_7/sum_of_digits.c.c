#include<stdio.h>
int main(){
        int n, count;
        printf("enter a number: ");
        scanf("%d", &n);
        count=0;
        while(n!=0)
        {
            n=n/10 ;
            count++ ;
        }
        printf("the digits in the number are %d", count);
    return 0;
}