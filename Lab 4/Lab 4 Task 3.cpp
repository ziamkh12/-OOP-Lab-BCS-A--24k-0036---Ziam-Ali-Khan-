/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class PropertyDeed {
private:
	int *ownerID;
public:
	PropertyDeed(int id) {
		ownerID = new int;
		*ownerID = id;

	}

	PropertyDeed(const PropertyDeed &obj, bool shallowCopy) {
		if(shallowCopy) {
		    ownerID = obj.ownerID;
			*ownerID = *(obj.ownerID);
		}
		else {
			ownerID = new int;
			*ownerID = *(obj.ownerID);
		}
	}

	void display() {
		cout<<"Value: "<<*ownerID<<endl<<"Address: "<<ownerID<<endl;
	}




};
int main()
{

	PropertyDeed owner1(3333);
	owner1.display();
	
	PropertyDeed owner2(owner1 , true);
	owner2.display();
	
	PropertyDeed owner3(owner1 , false);
	owner3.display();

	return 0;
}