#include<stdio.h>

extern int A;
extern int B;
int main()
{  
    printf("%d\n",A);
    printf("%d\n",B);


    return 0;
}


// if we create a global static variable then that variable is only accessible inside the file
// means we cannot access that variable outside the file using extern keyword. 