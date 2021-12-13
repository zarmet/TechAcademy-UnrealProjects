// ShapeInheritanceAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

class Shape 
{
    public:
        string Color;
        double getArea(double x, double y)
        {
            double area = x * y;
        }
};
class Rectangle: public Shape
{
public:
    double height;
    double width;
};

class Triangle : public Shape
{
public:
    double height;
    double base;
    double getArea(double x, double y)
    {
        double area = (x * y)/2;
    }
};

class Triangle : public Shape
{
public:
    double height;
    double base;
    double pi = 3.14159;
    double getArea(double x)
    {
        int area = (x * x) * pi;
    }
};


int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
