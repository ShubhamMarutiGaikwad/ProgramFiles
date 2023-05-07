#include<stdio.h> 
struct Demo
{
    int i;
    float f;
    int j;

};

int main()
{
    //like array we can initialise the member of structure using the concet of member initialisation list. In this the order of initialisation is important.
    struct Demo obj1={11,90.90,51};

    struct Demo *ptr=&obj1;

    // obj1.i=11; // . Direct mmember access operator
    // ptr->j=51;  // -> Indirect member access operator
    // ptr->f=90.90;

    printf("by using indirect access operator value i:%d \n ",ptr->i);
    printf("by using indirect access operator value i:%d \n ",ptr->i);
    printf("by using indirect access operator value i:%f \n ",ptr->f);

    printf("by using direct access operator value i:%d \n ",obj1.i);
    printf("by using direct access operator value f:%f \n ",obj1.f);
    printf("by using direct access operator value j:%d \n ",obj1.j);





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


