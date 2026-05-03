#include <iostream>
using namespace std;

// Class definition
class Car {
public:
    string brand;  // Attribute (Property)
    int year;      // Attribute

    // Method (Behavior)
    void startEngine() {
        cout << brand << " engine started! Vroom Vroom!" << endl;
        
    }
};

int main() {
    // Object তৈরি করা
    Car myCar; 
    myCar.brand = "Toyota";
    myCar.year = 2024;

    Car friendCar;
    friendCar.brand = "Tesla";

    myCar.startEngine();
    friendCar.startEngine();

    return 0;
}
