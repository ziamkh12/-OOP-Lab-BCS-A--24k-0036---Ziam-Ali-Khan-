/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class SecureBankAccount{
private:
    int accountnumber;
    double balance;
    const string accountType;
    int *loghistory;
public:
    SecureBankAccount(int accountnumber , double balance , string at, int l): accountType(at){
        if (balance >= 50){
            this->balance = balance;
        }
        else{
            cout<<"Balance should be higher than 50"<<endl;
            this->balance = 50;
        }
        this->accountnumber = accountnumber;
        loghistory = new int;
        *loghistory = l;
    }
    SecureBankAccount(const SecureBankAccount &obj): accountType(obj.accountType){
        loghistory = new int;
        accountnumber = obj.accountnumber;
        *loghistory = *(obj.loghistory);
        balance = obj.balance;
    }
    ~SecureBankAccount(){
        delete loghistory;
    }
};
int main(){
    SecureBankAccount s1(2122,432.0,"Current",50);
    return 0;
}
