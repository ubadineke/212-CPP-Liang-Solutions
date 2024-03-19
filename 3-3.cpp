#include <iostream>
using namespace std;

int main(){
    //Prompt user to enter required values 
    cout << "Enter a, b, c, d, e, f";
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    //Calculate determinant(det) of the matrix
    double det = a*d -b*c;
    double x{(e*d - b*f)/det};
    double y{(a*f - e*c)/det};
    cout << "x is " << x << " and y is " << y;
    return 0;
}