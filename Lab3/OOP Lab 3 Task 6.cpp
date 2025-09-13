/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Vehicle{
    public:
    string make;
    int model;
    
    virtual void display_info(){
        cout<<"Make = "<<make<<endl<<"Model = "<<model;
    }
};
class Car : public Vehicle{
    public:
    string engine_type;
    void display_info() override{
        cout<<"Make = "<<make<<endl<<"Model = "<<model<<endl<<"Engine Type"<<engine_type;
    }
    
};


int main()
{
 
   Car c1;
   c1.make  = "Toyota";
   c1.model = 2020;
   c1.engine_type = "Inline-4 Petrol Engine";
   c1.display_info();

    return 0;
}