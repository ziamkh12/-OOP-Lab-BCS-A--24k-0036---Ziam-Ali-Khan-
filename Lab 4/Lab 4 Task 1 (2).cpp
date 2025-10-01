/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class MobileAccount{
  private:
  double balance;
  string phN;
  public:
  MobileAccount(){
      balance = 50;
      phN = "";}
  MobileAccount(double b, string n){
      balance = b;
      phN = n;
  }
  void display(){
      cout<<"Balance: "<<balance<<endl;
      cout<<"Phone Number: "<<phN;
  }
  
  
};
int main()
{
    

    return 0;
}