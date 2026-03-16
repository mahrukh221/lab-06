#include <iostream>
using namespace std;

class Device
{
protected:
    string brand;
    string model;

public:
    Device(string b, string m)
    {
        brand = b;
        model = m;
    }

    void displayDevice()
    {
        cout <<"Brand:"<< brand << endl;
        cout <<"Model:"<< model << endl;
    }
};

class Smartphone : virtual public Device
{
protected:
    int simCount;

public:
    Smartphone(string b, string m, int s) : Device(b, m)
    {
        simCount = s;
    }

    void displaySmartphone()
    {
        cout <<"SIM Count:"<< simCount << endl;
    }
};

class Tablet : virtual public Device
{
protected:
    bool stylus;

public:
    Tablet(string b, string m, bool st) : Device(b, m)
    {
        stylus = st;
    }

    void displayTablet()
    {
        cout << "Stylus Support:";
        if (stylus)
            cout <<"Yes"<< endl;
        else
            cout <<"No"<< endl;
    }
};

class HybridDevice : public Smartphone, public Tablet
{
public:
    HybridDevice(string b, string m, int s, bool st)
        : Device(b, m), Smartphone(b, m, s), Tablet(b, m, st)
    {
    }

    void displayHybrid()
    {
        displayDevice();
        displaySmartphone();
        displayTablet();
    }
};

int main()
{
    HybridDevice device1("Apple","Hybrid Pro",2,true);

    cout << "Hybrid Device Information:" << endl;
    device1.displayHybrid();

    return 0;
}
