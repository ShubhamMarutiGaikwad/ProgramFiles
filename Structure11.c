/*we can create the connected nodes of by using the concept of self refrential structure*/
#include<stdio.h>

struct Demo
{
    int no;
    struct Demo *ptr;
};

int main()
{
    struct Demo *head;

    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    obj1.no=11;
    obj2.no=21;
    obj3.no=51;

    head=&obj1;
    obj1.ptr=&obj2;
    obj2.ptr=&obj3;
    obj3.ptr=NULL;

    printf("value of no from obj1 of structure Demo is:%d\n",obj1.no);
    printf("value of no from obj2 of structure Demo is:%d\n",obj2.no);
    printf("value of no from obj3 of structure Demo is:%d\n",obj3.no);
    
    printf("the address of obj1 is:%d\n",head);
    printf("the address of obj2 is:%d\n",obj1.ptr);
    printf("the address of obj3 is:%d\n",obj2.ptr);
    printf("the address of obj2 is:%d\n",obj3.ptr);
    
  
    

    return 0;
}