/* we can create the object of one structure as a member of another structure.
   This type of structure is called as "nested structure".
*/
#include<stdio.h>

struct Demo                           
{
   int i;
   float f;
};

struct Hello
{
    int no;
    int x;
    struct Demo dobj;

};


int main()
{
    struct Hello hobj;

    hobj.no=10;
    hobj.x=20;
    hobj.dobj.i=30;
    hobj.dobj.f=40.0;
   
    printf("Value of no in Hello structure is:%d \n",hobj.no);
    printf("Value of x in Hello structure is:%d \n",hobj.x);

    printf("Value of i in  Demo structure is:%d \n",hobj.dobj.i);
    printf("VAlue of f in Demo structure is %f \n",hobj.dobj.f);

    return 0;
}