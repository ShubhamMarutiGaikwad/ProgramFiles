#include<stdio.h>
int main()
{
    int A=10;
    extern int B;
    extern int C;

    printf("value of A is :%d \n",A);
    printf("value of B is :%d \n",B);
    printf("value of C is :%d \n",C);
    
    return 0;
}

// to compile the extern_demo.c and extern.c file use the command 
// gcc extern_demo.c extern.c -o myexe
// we can change the the sequence of files of writing 