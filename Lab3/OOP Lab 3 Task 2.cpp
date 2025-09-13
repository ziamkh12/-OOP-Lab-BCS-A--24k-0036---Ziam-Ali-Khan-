/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Student{
    private:
    int rollNumber;
    public:
    string name;
    
    void set_roll_number(int s){
        rollNumber = s;
    }
    int get_roll_number(){
        return rollNumber;
    }
    
};
int main()
{
    
    Student s1;
    s1.set_roll_number(6068);
    cout<<s1.get_roll_number();

    return 0;
}