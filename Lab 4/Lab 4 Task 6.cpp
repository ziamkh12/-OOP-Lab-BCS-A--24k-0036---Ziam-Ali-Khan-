/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class OrderDetails{
    private:
    int orderID;
    string itemname;
    const double deliveryFee;
    public:
    OrderDetails(int orderID,string itemname,double deliveryFee): deliveryFee(deliveryFee){
        this -> orderID = orderID;
        this -> itemname = itemname;
        
    }
    ~OrderDetails(){
        cout<<"Archived and memory deleted";
    }
};
int main()
{

   OrderDetails o1(1001,"Jeans",150.0);

	return 0;
}