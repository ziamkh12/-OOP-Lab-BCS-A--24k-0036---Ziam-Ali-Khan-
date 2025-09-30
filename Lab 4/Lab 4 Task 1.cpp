/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Admin;
class User {
private:
	int id;
	string name;
	string password;
	string role;
public:
	User(int i,string  n,string p,string r ) {
		id = i;
		name = n;
		password = p;
		role = r;

	}
	User() {
		id = 0;
		name = "Ziam";
		password = "123";
	}
	void Display() {
		cout<<endl;
		cout<<"ID: "<<id<<endl<<"NAME: "<<name<<endl<<"PASSWORD: "<<password<<endl;
	}
	int get_id() {
		return id;
	}

};
class Admin {
private:
	User* user;
	int  index;
	
public:
	Admin(int n) {

		user = new User[n];

	}
	void add(User u) {
		user[index] = u;
		index ++;
	}
	void display() {
	    for(int i=0;i<index;i++)
		    user[i].Display();
	}
	bool search(User u) {
		for(int i=0; i<index; i++) {
			if (user[i].get_id()== u.get_id()) {
				return true;
			}
		}
		return false;
	}
	void removeUser(User u) {

		for (int i = 0; i < index; i++) {
			if (user[i].get_id() == u.get_id()) {

				for (int j = i; j < index - 1; j++) {
					user[j] = user[j + 1];
				}
				index--;
				return;
			}
		}
	}
};


	int main() {
    Admin admin(5);

    User u1(1, "Ali", "pass1", "student");
    User u2(2, "Sara", "pass2", "teacher");
    User u3(3, "Omar", "pass3", "staff");

    admin.add(u1);
    admin.add(u2);
    admin.add(u3);

    cout << "All users:" << endl;
    admin.display();
    

    cout << "\nSearching for Sara: " 
         << (admin.search(u2) ? "Found" : "Not Found") 
         << endl;

    cout << "\nRemoving Sara..." << endl;
    admin.removeUser(u2);

    cout << "\nAll users after removal:" << endl;
    admin.display();

	return 0;
}