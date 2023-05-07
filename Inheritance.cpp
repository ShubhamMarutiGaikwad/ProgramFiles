#include<iostream>
using namespace std;
class Demo
{
   public:
       int A,B;

       Demo()
       {
        cout<<"Inside Demo constructor"<<"\n";
       }
       void fun()
       {
        cout<<"Inside fun of Demo"<<"\n";
       }

};
class Hello : public Demo        // in java class Hello extends Demo
{
   public:
   int X,Y;

   Hello()
   {
    cout<<"Inside Hello Constructor"<<"\n";
   }

   void gun()
   {
    cout<<"Inside gun of Hello"<<"\n";
   }
};
int main()
{



    return 0;
}