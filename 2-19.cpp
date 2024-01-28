#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // Prompt user to enter x1
    cout << "Enter x1: ";
    double x1{};
    cin >> x1;

    // Prompt user to enter y1
    cout << "Enter y1: ";
    double y1{};
    cin >> y1;

    // Prompt user to enter x2
    cout << "Enter x2: ";
    double x2{};
    cin >> x2;

    // Prompt user to enter y2
    cout << "Enter y2: ";
    double y2{};
    cin >> y2;

    // Prompt user to enter x3
    cout << "Enter x3: ";
    double x3{};
    cin >> x3;

    // Prompt user to enter y3
    cout << "Enter y3: ";
    double y3{};
    cin >> y3;

    // Calculate sides
    double side1{sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)))};
    double side2{sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)))};
    double side3{sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)))};

    // Calculate s
    double s{(side1 + side2 + side3) / 2};

    // Calculate area
    double area{sqrt(s * (s - side1) * (s - side2) * (s - side3))};

    // Display area
    cout << "The area is " << area;
    return 0;
};