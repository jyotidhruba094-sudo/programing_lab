#include<stdio.h>
int main(){
   int y;
   printf(" enter a year: ");
   scanf("%d" ,&y);
   if ( y%4 == 0 && y%100 != 0){
       printf(" the year is a leap year");
   }
   else{
       printf(" the year is not a");
   }
    return 0;
}