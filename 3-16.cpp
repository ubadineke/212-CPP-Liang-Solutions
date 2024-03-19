#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Prompt user to enter sides of the triangle
    cout << "Enter edges of the triangle";
    int side1, side2, side3;
    cin >> side1 >> side2 >> side3;

    double area;
    //Compute area with formula: 
    if(side1 == side2 && side1 == side3){
        area = (sqrt(3)/4*side1*side1);
        cout << "The area of the triangle is " << area;
    }else{
        cout << "Input is invalid";
    }
return 0;
}