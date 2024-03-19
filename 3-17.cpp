#include <iostream> 
using namespace std;

int main(){
    //Prompt user to enter three digit number
    cout << "Enter 3-digit number: ";
    int number;
    cin >> number;

    //Validate number and get the sum 
    if(number >= 100 && number < 1000){
        int first_digit = number / 100;
        int second_digit = (number % 100)/10;
        int third_digit = number % 10;
        int sum = first_digit + second_digit + third_digit;
        cout << "Sum of digits is " << sum;
    }else{
        cout << "Invalid number";
    }


    return 0;
}