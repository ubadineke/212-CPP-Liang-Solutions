#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int random_number = rand() % 100;
    int number_type = random_number % 2;

    cout << "Is " << random_number << " even or odd? ";
    cout << "Enter 0 for even and 1 for odd: ";
    int guess;
    cin >> guess;

    if(guess == number_type){
        cout << "Your guess is correct";
    }else {
        cout << "Your guess is incorrect";
    };

return 0;
}