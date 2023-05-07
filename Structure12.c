/*if our structure contain the character then the compiler will allocate 4 byte of memory and from that 4 bytes 1 byte is used
   by the character and remaining 3 bytes get's wasted which is called as'padding'. PAdding is such a memory which is allocated by the compiler but not used 
   to store the data.The memory allocation startigies are pirely based on the compiler that we use.*/
#include<stdio.h>

struct Demo
{
    int no;
    char ch;
    float f;
    int i;
};

int main()
{
    struct Demo obj;

    printf("%d\n",sizeof(obj));
    
    return 0;
}