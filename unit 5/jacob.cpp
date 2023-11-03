#include <iostream>
#include <cmath>

class QuadraticEquation
{

private:
    double a, b, c;

public:
    QuadraticEquation() : a(0.0), b(0.0), c(0.0) {}

    void setCoefficients(double a, double b, double c)
    {

        this->a = a;

        this->b = b;

        this->c = c;
    }

    void solveAndDisplayRoots()
    {

        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0)
        {

            double root1 = (-b + sqrt(discriminant)) / (2 * a);

            double root2 = (-b - sqrt(discriminant)) / (2 * a);

            std::cout << "Root 1: " << root1 << std::endl;

            std::cout << "Root 2: " << root2 << std::endl;
        }
        else if (discriminant == 0)
        {

            double root = -b / (2 * a);

            std::cout << "Root: " << root << std::endl;
        }
        else
        {

            double realPart = -b / (2 * a);

            double imaginaryPart = sqrt(-discriminant) / (2 * a);

            std::cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << std::endl;

            std::cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << std::endl;
        }
    }
};

int main()
{

    QuadraticEquation *equation = new QuadraticEquation();

    double a, b, c;

    std::cin >> a >> b >> c;

    equation->setCoefficients(a, b, c);

    equation->solveAndDisplayRoots();

    delete equation;

    return 0;
}