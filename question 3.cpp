#include <iostream>
using namespace std;

class Position
{
protected:
    float x, y, z;

public:
    Position(float a1Val, float a2Val, float a3Val)
    {
        x = a1Val;
        y = a2Val;
        z = a3Val;
    }

    void displayPosition()
    {
        cout << "Position (x, y, z): " << x << ", " << y << ", " << z << endl;
    }
};

class Health
{
protected:
    int health;

public:
    Health(int h)
    {
        health = h;
    }

    void displayHealth()
    {
        cout << "Health: " << health << endl;
    }
};

class Character : public Position, public Health
{
public:
    Character(float a1Val, float a2Val, float a3Val, int h)
        : Position(a1Val, a2Val, a3Val), Health(h)
    {
    }

    void display()
    {
        cout << "Character Details:" << endl;
        displayPosition();
        displayHealth();
    }
};

int main()
{
    Character player(22.0, 10.0, 2.0, 40);
    player.display();

    return 0;
}
