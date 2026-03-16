#include <iostream>
#include <string>
using namespace std;

class Book
{
protected:
    string title;
    string author;
    string publisher;

public:
    Book(string t, string a, string p)
    {
        title = t;
        author = a;
        publisher = p;
    }

    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

class FictionBook : public Book
{
private:
    string genre;
    string protagonist;

public:
    FictionBook(string t, string a, string p, string g, string pr)
        : Book(t, a, p)
    {
        genre = g;
        protagonist = pr;
    }

    void display()
    {
        cout << "Fiction Book Details " << endl;
        Book::display();
        cout << "Genre: " << genre << endl;
        cout << "Protagonist: " << protagonist << endl;
    }
};

int main()
{
    FictionBook book1("The Hobbit", "J.R.R. Tolkien", "Harry Potter", "Vampire diaries", "Bilbo Baggins");

    book1.display();

    return 0;
}
