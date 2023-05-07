/* we can create the nested structure by declaring the inner structure inside the outer structure itself
   If the structure is nested structure then we have to use the object name sequentially to access all the members .*/
#include<stdio.h>

struct Hello
{
   int no;
   int x;
   struct Demo
   {
    int i;
    float f;
   }dobj;
}hobj;


int main()
{
    //struct Hello hobj;
    
    hobj.no=10;
    hobj.x=20;
    hobj.dobj.i=30;
    hobj.dobj.f=40.0;
    
    printf("Value of no from structure Hello is:%d \n",hobj.no);
    printf("Value of x from structure Hello is:%d \n",hobj.x);

    printf("Value of i from structure Hello is:%d \n",hobj.dobj.i);
    printf("Value of f from structure Hello is:%f \n",hobj.dobj.f);

    return 0;
}