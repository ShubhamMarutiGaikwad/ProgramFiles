#include<stdio.h>
struct Demo
{
   int no;
   struct Demo *ptr;
   
};



int main()
{  
    struct Demo obj;

    printf("Address of structure is: %d \n",
    ptr);

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