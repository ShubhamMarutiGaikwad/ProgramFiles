// class= characteristics + Behaviour
// class= Data + Function
#include<iostream>
using namespace std;

class Demo
{
   public:
       int No1;
       int No2;

       void fun()
       {
            cout<<"Inside Fun\n";
       }

};

int main()
{
    Demo obj1;
    Demo obj2;

    cout<<"size of object : "<<sizeof(obj1)<<"\n";

    obj1.No1=10;
    obj1.No2=20;

    obj2.No1=30;
    obj2.No2=40;
    //fun(); direct calling not possible bevause it is OO
    obj1.fun();   
    obj2.fun();


    return 0;
}