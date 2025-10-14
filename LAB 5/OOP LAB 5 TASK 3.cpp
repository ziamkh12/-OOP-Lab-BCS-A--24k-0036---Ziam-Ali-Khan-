#include <iostream>
#include <string>
using namespace std;

class CallRecord {
private:
    string callerID;
    int durationMinutes;

    
    static int totalCalls;

public:
    
    CallRecord() {
        callerID = "Unknown";
        durationMinutes = 0;
        totalCalls++; 
    }

    
    CallRecord(string id, int duration) {
        callerID = id;
        durationMinutes = duration;
        totalCalls++; 
    }

    
    void display() const {
        cout << "Caller ID: " << callerID
             << " Duration: " << durationMinutes << " minutes" << endl;
    }

    
    static void getTotalCalls() {
        cout << "\nTotal calls logged today: " << totalCalls << endl;
    }
};


int CallRecord::totalCalls = 0;

int main() {
    
    CallRecord calls[20] = {
        CallRecord("03001234567", 5), 
        CallRecord("03119998877", 10)

    };

    
    
    for (int i = 0; i < 1; i++) {
        calls[i].display();
    }

    
    CallRecord::getTotalCalls();

    return 0;
}
