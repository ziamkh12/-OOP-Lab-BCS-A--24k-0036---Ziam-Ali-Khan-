/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Concrete{
    private:
    string message;
        
    public:
    Concrete(string m){
        message = m;
    }
    void PrintMessage(){
        cout<<message;
    }

        
    
    
};


int main()
{
 
  Concrete m1("Hello World");
  m1.PrintMessage();

    return 0;
}