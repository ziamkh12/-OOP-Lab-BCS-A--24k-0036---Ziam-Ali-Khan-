/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Calculator{
    private:
    int num1;
    int num2;
    public:
    
    void set_numbers(int n1,int n2);
    
    void add();
        
    
    
};
void Calculator ::set_numbers(int n1,int n2){
    num1 = n1;
    num2 = n2;
}
void Calculator ::add(){
    cout<<num1+num2;
}

int main()
{
 
  Calculator c1;
  c1.set_numbers(10,10);
  c1.add();

    return 0;
}