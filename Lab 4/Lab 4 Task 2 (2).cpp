/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class NUCES_student{
  private:
  int id;
  string name;
  public:
  NUCES_student(){
      id = 0;
      name = "Not Registered";
      
  }
  NUCES_student(int id){
      this->id  = id;
      name = "Name Pending";
      
  }
  NUCES_student(int id , string name){
      this -> id = id;
      this -> name = name;
  }
  void display(){
      cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl;
  }
  
};
int main()
{
    NUCES_student student1;
    student1.display();
    NUCES_student student2(3421);
    student2.display();
    NUCES_student student3(3421,"Ziam");
    student3.display();
    
    

    return 0;
}