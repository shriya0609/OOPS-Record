#include <iostream>
using namespace std;

// Base Class 1
class Engine {
protected:
    int engineCC;
public:
    void getEngineInfo() {
        cout << "Enter Engine Capacity (in CC): ";
        cin >> engineCC;
    }
};

// Base Class 2
class Body {
protected:
    string color, type;
public:
    void getBodyInfo() {
        cout << "Enter Vehicle Color: ";
        cin >> color;
        cout << "Enter Body Type (SUV/Sedan/Hatchback/etc): ";
        cin >> type;
    }
};

// Derived Class (Multiple Inheritance)
class Car : public Engine, public Body {
public:
    void showDetails() {
        cout << "\n--- Vehicle Information ---\n";
        cout << "Engine Capacity: " << engineCC << " CC" << endl;
        cout << "Body Color: " << color << endl;
        cout << "Body Type: " << type << endl;
    }
};

int main() {
    Car obj;
    obj.getEngineInfo();
    obj.getBodyInfo();
    obj.showDetails();
    return 0;
}
