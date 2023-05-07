#include<stdio.h>
struct Demo
{ 
    int i;
    float f;
    char ch;

};
int main()
{
    struct Demo obj;

    // Direct member initialization by object 
    // obj.i=10;
    // obj.f=12.12;
    // obj.ch='A';

    struct Demo *ptr=&obj;

    // Indirect member initialization using pointer 
    ptr->i=20;
    ptr->f=14.15;
    ptr->ch='B';

    printf("int value :%d \n ",obj.i);
    printf("int value :%f \n ",obj.f);
    printf("int value :%c \n ",obj.ch);
    printf("address of obj is :%d \n ",ptr);
     printf("address of obj is :%d \n ",*ptr);
    return 0;
}