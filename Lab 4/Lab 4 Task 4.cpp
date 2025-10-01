/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class ServerSession{
    public:
    int sessionid;
    ServerSession(int s){
        sessionid = s;
        cout<<"Session has started"<<endl;
    }
    ~ServerSession(){
        cout<<"Session has ended";
    }
};
int main()
{

 ServerSession s1(212);

	return 0;
}