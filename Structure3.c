#include<stdio.h> 
struct Demo
{
    // we can create pointers as a member of structure
    int i;
    int j;
    int *ip;
    int *fp;

};

int main()
{
    struct Demo obj;
    int no=90;
    float f=90.67;

    obj.i=11;
    obj.j=21;
    obj.ip=&no;
    obj.fp=&f;

    printf("value of i is:%d \n",obj.i);
    printf("value of j is:%d \n",obj.j);
    printf("address of no is:%d \n",*(obj.ip));
    printf("address of f is:%d \n",*(obj.fp));

    
    return 0;
}




/*
// Direct member initialisation
obj1.i=11;
obj1.f=90.90;
obj1.j=51;

//Indirect member initialisation
ptr->i=11;
ptr->f=90.90;
ptr->j=51;


*/


