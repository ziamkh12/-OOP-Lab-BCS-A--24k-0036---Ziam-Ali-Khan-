/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class CurrencyExchange{
  private:
  const double PKR_TO_USD ;
  string *branchName;
  int totalTransactions;
  public:
  CurrencyExchange(double n,string b , int t): PKR_TO_USD(n) , branchName(new string(b)) , totalTransactions(t){}
  double convertPKRtoUSD(double num){
      double dollars;
      dollars =  num / PKR_TO_USD;
      return dollars;
  }
  
};
int main()
{

    CurrencyExchange c1(281.1,"Global Exchange",10);
    cout<<"$"<<c1.convertPKRtoUSD(250000);

	return 0;
}