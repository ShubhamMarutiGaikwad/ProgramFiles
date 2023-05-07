#include<stdio.h>
struct Demo
{ 
    int i;
    float f;
    int *ip;
    float *fp;

};
int main()
{
    struct Demo obj;

    int no=50;
    float flt=56.56;

    // Direct member initialization by object 
    obj.i=10;
    obj.f=12.12;
    obj.ip=&no;
    obj.fp=&flt;
     

    //struct Demo *ptr=&obj;

    // Indirect member initialization using pointer 
    // ptr->i=20;
    // ptr->f=14.15;
   

    printf("int value :%d \n ",obj.i);
    printf("int value :%f \n ",obj.f);
    printf("int value :%d \n ",obj.ip);
    printf("int value :%d \n ",obj.fp);
   
    // printf("address of obj is :%d \n ",ptr);
    //  printf("address of obj is :%d \n ",*ptr);
    return 0;
}