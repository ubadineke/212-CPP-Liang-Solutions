#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    int random_number = rand() % 100;
    string final_type;
    string guess;
    if(random_number % 2 == 0){
        final_type = "even";
    }else{
        final_type = 'odd';
    };

    cout << "The random number is " << random_number << endl;
    cout << "What's your guess, 'even' or 'odd'? " << endl;
    cin >> guess;

    if(guess != "odd" || guess != "even"){
        cout << "You've entered an incorrect value, enter either 'even' or  'odd'" << endl;
        cin >> guess;
    }

    if(guess == final_type){
        cout <<"Your guess is correct";
    }else{
        cout <<"Your guess is incorrect";
    };


 return 0;
}