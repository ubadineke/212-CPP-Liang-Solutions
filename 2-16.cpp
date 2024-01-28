#include <iostream>
using namespace std;
#include <cmath>
int main()
{

    // Prompt user to enter the value of s

    cout << "Enter s: ";
    double s{};
    cin >> s;

    // Compute the area of the hexagon

    double Area{(3 * sqrt(3) * s * s) / 2};
    cout << Area;

    return 0;
};
