#include<stdio.h>
int main()
{
   int no=11;
   int *p=NULL;
   p=&no;

   printf("%d\n",*p);

    return 0;
}