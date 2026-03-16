#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
protected:
    int studentID;

public:
    Student(string n, int a, int id) : Person(n, a)
    {
        studentID = id;
    }

    void displayStudent()
    {
        displayPerson();
        cout << "Student ID: " << studentID << endl;
    }
};

class Teacher : public Person
{
protected:
    string subject;
    int roomNumber;

public:
    Teacher(string n, int a, string asub, int aroom) : Person(n, a)
    {
        subject = asub;
        roomNumber = aroom;
    }

    void displayTeacher()
    {
        displayPerson();
        cout << "Subject: " << subject << endl;
        cout << "Room Number: " << roomNumber << endl;
    }
};

class GraduateStudent : public Student, public Teacher
{
public:
    GraduateStudent(string n, int a, int id, string asub, int aroom)
        : Student(n, a, id), Teacher(n, a, asub, aroom)
    {
    }

    void display()
    {
        cout << "Graduate Student Details:" << endl;
        Student::displayStudent();
        cout << "Subject: " << subject << endl;
        cout << "Room Number: " << roomNumber << endl;
    }
};

int main()
{
    GraduateStudent g("mahrukh",19,0147, "AI", 22);
    g.display();
    return 0;
}
