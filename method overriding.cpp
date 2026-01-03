#include <iostream>
using namespace std;
class Ford {
public:
    string brand = "Ford";
    virtual void vehicleType() {
        cout << "Vehicle Type: Four Wheeler" << endl;
    }
};
class Car : public Ford {
public:
    void vehicleType() {
        cout << "Vehicle Type: Sports Vehicle" << endl;
    }
};
int main() {
    Ford f;
    Car c;
    cout << "Brand Name: " << f.brand << endl;
    f.vehicleType();
    cout << endl;
    cout << "Brand Name: " << c.brand << endl;
    c.vehicleType();
cout<<"Name:Rida Shehzad"<<endl;
cout<<"RollNo:030"<<endl;
    return 0;
}

