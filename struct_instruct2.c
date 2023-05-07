#include<stdio.h>
struct Demo
{
   int i;
   float j;

   struct Hello
{  
  int no;
  int x;
};
};



int main()
{  
    struct Demo obj1;
    obj1.i=30;
    obj1.j=40;

    printf("value of i is:%d \n",obj1.i);
    printf("value of j is:%f \n",obj1.j);

    struct Hello obj;
    obj.no=10;
    obj.x=20;

    printf("value of no is:%d \n",obj.no);
    printf("value of x is:%d \n",obj.x);

    return 0;
}

/*
struct Demo
{
   int i;
   float j;

   struct Hello
{  
  int no;
  int x;
}hobj;
}dobj;



*/