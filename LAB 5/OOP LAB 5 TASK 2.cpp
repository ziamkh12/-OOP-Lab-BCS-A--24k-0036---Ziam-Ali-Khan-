#include <iostream>
#include <string>
using namespace std;

class MobileDevice {
private:
    string modelName;
    const  int  IMEINumber;  

public:
    
    MobileDevice(string model,  int imei)
        : modelName(model), IMEINumber(imei) {}

    
    void verifyDevice()  {
        
        cout << "Model Name : " << modelName << endl;
        cout << "IMEI Number: " << IMEINumber << endl;
        cout << "Device verified successfully by PTA.\n";
        
    }
};

int main() {
    
    
    MobileDevice device1("iPhone 15 Pro", 3529);

    
    device1.verifyDevice();
   

    return 0;
}
