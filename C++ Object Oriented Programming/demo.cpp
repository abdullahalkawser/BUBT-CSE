#include <iostream>
using namespace std;

// Class definition
class Car {
private:
double price;  // Private attribute



public:
    string brand;  // Attribute (Property)
    int year;      // Attribute
    double price;  // Attribute

    // Method (Behavior)
    void startEngine() {
        cout << brand << " engine started! Vroom Vroom!" << endl;
        
    }

    //setter method for price use for set private attribute price

void setprice(double p){
    price  =p; // this->price = p; // this pointer is used to refer to the current object's price attribute
}


//getter method for price  use for access private attribute price
double getprice(){
    return price;
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
