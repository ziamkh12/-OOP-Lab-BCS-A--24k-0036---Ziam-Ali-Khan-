/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollNumber;
};
int main()
{
    
    Student s1;
    s1.name = "Ziam";
    s1.rollNumber = 36;
    cout<<s1.name<<" "<<s1.rollNumber;
    return 0;
}