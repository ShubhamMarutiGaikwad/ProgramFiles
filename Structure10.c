/*We can create a pointer which points to the same type of structure which is called as "self refrential structure".*/

#include<stdio.h>

struct Demo
{
    int no;
    struct Demo *ptr;

};

int main ()
{   
    struct Demo obj1;

    obj1.no = 11;
    obj1.ptr = NULL;
    
    // obj1.no = 11;                       // This is my code for practice purpose
    // obj1.ptr =&obj1.no;

    // printf("%d\n",obj1.no);
    // printf("%d\n",obj1.ptr);

    return 0;
}