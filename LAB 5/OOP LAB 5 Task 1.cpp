#include <iostream>
using namespace std;

class PetrolPump {
private:
    int pumpID;
    double litersFilled;

public:
    
    static double pricePerLiter;

    
    PetrolPump(int id, double liters) {
        pumpID = id;
        litersFilled = liters;
    }

    
    void printReceipt() const {
        double totalAmount = litersFilled * pricePerLiter;
        
        
        cout << "Pump ID       : " << pumpID << endl;
        cout << "Liters Filled : " << litersFilled << " L" << endl;
        cout << "Price per Liter: " << pricePerLiter << " PKR" << endl;
        cout << "Total Amount  : " << totalAmount << " PKR" << endl;
        
    }
};


double PetrolPump::pricePerLiter = 270.50;

int main() {
    
    PetrolPump pump1(101, 15.0);
    

    
    
    pump1.printReceipt();

    
    PetrolPump::pricePerLiter = 280.00;

    
    pump1.printReceipt();
 

    return 0;
}
