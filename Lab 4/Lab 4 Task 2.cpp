/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Product {
public:
	int id;
	string name;
	double price;
	int squantity;
public:
	Product() {
		id = 1;
		name= "COCOMO";
		price = 5;
		squantity=10;
	}
	Product(int n,string na,double p,int s) {
		id = n;
		name = na;
		price = p;
		squantity = s;
	}

};
class ShoppingCart {
private:
	Product *product;
	int index;
public:
	ShoppingCart(int size) {
		product = new Product[size];
	}
	~ShoppingCart() {
		delete[] product;
	}
	void add(Product &p) {
		if(p.squantity > 0) {
			product[index] = p;
			p.squantity--;
			index++;
		}
	}
	void removep(Product p) {
		for(int i=0; i<index; i++) {
			if(p.id == product[i].id) {
				for(int j =i; j<index -1; j++) {
					product [i] = product[j+1];


				}
				index--;
				return;
			}
		}
	}
	void display() {
		for(int i=0; i<index; i++) {
			cout<<"ID: "<<product[i].id<<endl;
			cout<<"Name: "<<product[i].name<<endl;
			cout<<"Price: "<<product[i].price<<endl;
			cout<<"Quantity: "<<product[i].squantity<<endl;
		}
	}
	void t_price() {
		double t_price = 0;
		for(int i=0; i<index; i++) {
			t_price += product[i].price;
		}
		cout<<"Total price = "<<t_price<<endl;
	}

};
int main()
{
	Product p1(1, "Cocomo", 5, 10);
	Product p2(2, "Lays", 50, 5);

	ShoppingCart cart(5);
	cart.display();
	cart.add(p1);
	cart.add(p2);
	cart.display();
	cart.t_price();

	cout << "Removing Lays...\n";
	cart.removep(p2);
	cart.display();

	return 0;
}