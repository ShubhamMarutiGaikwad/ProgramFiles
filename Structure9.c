/*We can create multiple object of inner structure in case of the nested structure.*/

#include<stdio.h>

struct Hello
{
    int no;
    int x;
    struct Demo 
    {
        int i;
        float f;
    }dobj1,dobj2;
}hobj,hobj2;

int main ()
{   
    hobj.no=10;
    hobj.x=20;
    hobj.dobj1.i=30;
    hobj.dobj1.f=40.0;
    hobj.dobj2.i=50;
    hobj.dobj2.f=60.0;

    hobj2.no=90;

    printf("Value of no from structure Hello is:%d \n",hobj.no);
    printf("Value of x from structure Hello is:%d \n",hobj.x);

    printf("Value of no from structure Hello is:%d \n",hobj.dobj1.i);
    printf("Value of x from structure Hello is:%f \n",hobj.dobj1.f);

    printf("Value of no from structure Hello is:%d \n",hobj.dobj2.i);
    printf("Value of x from structure Hello is:%f \n",hobj.dobj2.f);

    return 0;
}