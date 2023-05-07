#include<stdio.h>
struct Demo
{
   int i;
   float j;
};

struct Hello
{  
  int no;
  int x;
  struct Demo obj;
};

int main()
{  
    struct Hello hobj;
    hobj.no=10;
    hobj.x=20;
    hobj.obj.i=30;
    hobj.obj.j=40.563f;

    printf("value of no: %d \n",hobj.no);
    printf("value of x: %d \n",hobj.x);
    printf("value of i: %d \n",hobj.obj.i);
    printf("value of j: %f \n",hobj.obj.j);

    return 0;
}