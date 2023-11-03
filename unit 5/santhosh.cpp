#include <iostream>
#include <string>
using namespace std;

class Color
{

public:
    virtual void paint()
    {

        cout << "I'm Painting.";
    }
};

class RedPaint : public Color
{

public:
    void paint()
    {

        cout << "I'm Painting with Red color.";
    }
};

class BluePaint : public Color
{

public:
    void paint()
    {

        cout << "I'm Painting with Blue color.";
    }
};

int main()
{

    Color *c;

    char choice;

    // cout << "Enter color to paint (R for red, B for blue): ";

    cin >> choice;

    if (choice == 'R' || choice == 'r')
    {

        c = new RedPaint();
    }

    else if (choice == 'B' || choice == 'b')
    {

        c = new BluePaint();
    }

    else
    {

        cout << "Invalid choice!";

        return 0;
    }

    c->paint();

    delete c;

    return 0;
}