#include<iostream>
using namespace std;


class Character
{
protected:
    int health;
    int damage;

public:
    Character(int h, int d)
    {
        health = h;
        damage = d;
    }

    void display()
    {
        cout << "Health: " << health << endl;
        cout << "Damage: " << damage << endl;
    }
};
class Enemy : public Character
{
public:
    Enemy(int h, int d) : Character(h, d) {}

    void display()
    {
        cout << "Enemy Stats:" << endl;
        Character::display();
    }
};
class Player : public Character
{
public:
    Player(int h, int d) : Character(h, d) {}

    void display()
    {
        cout << "Player Stats:" << endl;
        Character::display();
    }
};
class Wizard : public Player
{
    int magicPower;

public:
    Wizard(int h, int d, int m) : Player(h, d)
    {
        magicPower = m;
    }

    void display()
    {
        cout << "Wizard Stats:" << endl;
        Player::display();
        cout << "Magic Power: " << magicPower << endl;
    }
};
int main()
{
    Wizard w(33, 100, 43);
    w.display();
    return 0;
}
