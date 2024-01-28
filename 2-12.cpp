#include <iostream>
using namespace std;

int main()
{
    // Prompt user to enter v
    cout << "Enter v then a: ";
    double v{}, a{};
    cin >> v >> a;

    // Prompt user to enter a
    // cout << "Enter a: ";
    // double a{};
    // cin >> a;

    // Compute the length of the runway using the formula
    double length{(v * v) / (2 * a)};
    cout << "The length of the runway is: " << length;
    return 0;
};