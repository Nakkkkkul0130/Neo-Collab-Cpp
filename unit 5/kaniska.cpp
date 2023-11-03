#include <iostream>

using namespace std;

class Vehicle
{

protected:
    int numOfWheels;

    float maxSpeed;

public:
    Vehicle() : numOfWheels(0), maxSpeed(0.0) {}

    virtual void setNumOfWheels(int wheels)
    {

        numOfWheels = wheels;
    }

    virtual void setMaxSpeed(float speed)
    {

        maxSpeed = speed;
    }

    virtual int getNumOfWheels()
    {

        return numOfWheels;
    }

    virtual float getMaxSpeed()
    {

        return maxSpeed;
    }

    virtual float timeToTravel(float distance)
    {

        return 0.0;
    }
};

class Car : public Vehicle
{

public:
    float timeToTravel(float distance)
    {

        return distance / maxSpeed;
    }
};

class Bicycle : public Vehicle
{

public:
    float timeToTravel(float distance)
    {

        return distance / maxSpeed;
    }
};

class Boat : public Vehicle
{

public:
    float timeToTravel(float distance)
    {

        return distance / (maxSpeed * 1.151);
    }
};

int main()
{

    Car car;

    Bicycle bike;

    Boat boat;

    int num;

    float speed;

    cin >> num;

    car.setNumOfWheels(num);

    cin >> speed;

    car.setMaxSpeed(speed);

    cin >> num;

    bike.setNumOfWheels(num);

    cin >> speed;

    bike.setMaxSpeed(speed);

    cin >> speed;

    boat.setMaxSpeed(speed);

    float distance;

    cin >> distance;

    cout << "Vehicle Details:" << endl;

    cout << "Car has " << car.getNumOfWheels() << " wheels and can go up to " << car.getMaxSpeed() << " mph. It would take " << distance / car.getMaxSpeed() << " hours to travel " << distance << " miles at maximum speed." << endl;

    cout << "Bicycle has " << bike.getNumOfWheels() << " wheels and can go up to " << bike.getMaxSpeed() << " mph. It would take " << distance / bike.getMaxSpeed() << " hours to travel " << distance << " miles at maximum speed." << endl;

    cout << "Boat has " << boat.getNumOfWheels() << " wheels and can go up to " << boat.getMaxSpeed() << " knots. It would take " << distance / (boat.getMaxSpeed() * 1.151) << " hours to travel " << distance << " miles at maximum speed." << endl;

    return 0;
}
