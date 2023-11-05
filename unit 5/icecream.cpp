#include <iostream>

#include <iomanip>

#include <cmath>

class Icecream
{

public:
    virtual float Quantity() = 0;
};

class SphereIcecream : public Icecream
{

private:
    int radius;

public:
    SphereIcecream(int r) : radius(r) {}

    float Quantity() override
    {

        return 4.0 / 3.0 * M_PI * pow(radius, 3);
    }
};

class ConeIcecream : public Icecream
{

private:
    int radius;

    int height;

public:
    ConeIcecream(int r, int h) : radius(r), height(h) {}

    float Quantity() override
    {

        return 0.33 * M_PI * pow(radius, 2) * height;
    }
};

int main()
{

    Icecream *obj;

    int choice, r, h;

    std::cin >> choice;

    if (choice == 1)
    {

        std::cin >> r;

        obj = new SphereIcecream(r);
    }

    else if (choice == 2)
    {

        std::cin >> r >> h;

        obj = new ConeIcecream(r, h);
    }

    else
    {

        return 0;
    }

    std::cout << std::fixed << std::setprecision(2);

    std::cout << obj->Quantity();

    delete obj;

    return 0;
}
