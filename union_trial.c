#include<stdio.h>
union Demo
{
   int no;
   double d;
   char c;
   float f;
   
};



int main()
{  
    union Demo obj;
    printf("size of union is : %d \n",sizeof(obj));
    obj.c='A';
    obj.no=10;
   obj.d=56.56;

    printf("value of c is:%c \n",obj.c);       
    printf("value of no is:%d \n",obj.no);
    printf("value of c is:%f \n",obj.d);
    

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