#include<stdio.h>
int main()
{
   int no1=10;
   int no2=20;

   //ptr=*ptr+20;

   //printf("constant pointer holding value of no1: %d \n",*ptr);

   // printf("constant pointer holding value of no1: %d \n",*ptr);

   //int const * const ptr;

   const int * const ptr;
   ptr=&no1;
   //ptr=*ptr+40;
   printf("constant pointer holding value of no1: %d \n",*ptr);





    return 0;
}