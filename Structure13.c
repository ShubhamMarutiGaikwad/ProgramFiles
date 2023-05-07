/*if we declare the charcter one after another in the same structure then compiler will assign the padded memory to 
   the character in line with previous character*/
#include<stdio.h>

struct Demo
{
    int no;
    char ch1;
    char ch2;       // This character will get the memory of 1byte from padded memory of ch1.
    float f;
    int i;
};

struct Hello
{
    int no;
    char ch1;
    float f;
    char ch2;
    int i;
};

int main()
{
    struct Demo obj;

    printf("size of Demo structure is:%d\n",sizeof(obj));
    
    return 0;
}