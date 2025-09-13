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
    string name;
    int rollNo;
    double marks;
    char grade;
    public:
    Student(string s, int r , double m){
        name = s;
        rollNo = r;
        marks = m;
    }
    void CalculateGrade(){
        if (marks >=90)
        grade = 'A';
        else if(marks <90 && marks>=80)
        grade = 'B';
        else if(marks< 80 && marks >=70)
        grade = 'C';
        else
        grade = 'F';
        
    }
    void displayStudentInfo(){
        cout<<"Name = "<<name<<endl<<"Roll number = "<<rollNo<<endl<<"Marks = "<<marks<<endl<<"Grade = "<<grade<<endl;
    }

};



int main()
{
 
    
    Student s1("Ziam",6068,82);
    Student s2("Ali",6000,78);
    s1.CalculateGrade();
    s2.CalculateGrade();
    cout<<"Student 1"<<endl;
    s1.displayStudentInfo();
    cout<<"Student 2"<<endl;
    s2.displayStudentInfo();
    
    return 0;
}