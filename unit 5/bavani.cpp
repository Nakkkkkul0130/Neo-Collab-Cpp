#include <bits/stdc++.h>

#include <string>

using namespace std;

class Vehicle
{

public:
    void move(string s1)
    {

        cout << s1 << "\n";
    }
};

class MotorBike : public Vehicle
{

public:
    void move(string s2)
    {

        cout << s2 << "\n";
    }
};

int main()
{

    string str1, str2;

    cin >> str1 >> str2;

    Vehicle v;

    v.move(str1);

    Vehicle v1;

    v1.move(str2);
}