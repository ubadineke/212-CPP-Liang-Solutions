#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    int number1 = rand() % 100;
    int number2 = rand() % 100;

    //Display question 
    cout << "What is " << number1 << " * " << number2 << " : ";    

    //Accept user's guess
    int answer;
    cin >> answer;

    if(answer == (number1 * number2)){
        cout << "Correct answer";
    }else {
        cout << "Wrong, the answer is " << number1 * number2;
    }
    return 0;
}