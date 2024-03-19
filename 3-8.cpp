#include <iostream>
using namespace std;

int main(){
    //Prompt user to enter sides of the triangle 
    cout << "Enter sides of the triangle: ";
    int side1, side2, side3;
    cin >> side1 >> side2 >> side3;
    if(side1 == side2 && side1 == 3){
        cout << "Equilateral Triangle";
    }else if(side1 == side2 || side1 == side3 || side2 == side3){
        cout << "Isoceles Triangle";
    }else{
        cout << "Scalene Triangle";
    }

    return 0;
};