#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string make, model;
    int year;

public:
    
    Vehicle(string m, string mo, int y)
    {
        make = m;
        model = mo;
        year = y;
    }

    void showVehicle()
    {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle
{
protected:
    int doors;

public:
    
    Car(string m, string mo, int y, int d) : Vehicle(m, mo, y)
    {
        doors = d;
    }

    void showCar()
    {
        showVehicle();
        cout << "Number of Doors: " << doors << endl;
    }
};

class ElectricCar : public Car
{
private:
    int batteryLife;

public:
    
    ElectricCar(string m, string mo, int y, int d, int b) : Car(m, mo, y, d)
    {
        batteryLife = b;
    }

    void display()
    {
        showCar();
        cout << "Battery Life: " << batteryLife << " km" << endl;
    }
};

int main()
{
    ElectricCar e1("civic honda", "Model xyz", 2011,4,320);

    cout << "Electric Car Information:" << endl;
    e1.display();

    return 0;
}
