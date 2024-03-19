#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int computer_generated = rand() % 100 + 1;
    cout << computer_generated;
    
    //c - computer, f - first, s - second, u - user, d - digit
    int cfd = computer_generated / 10;
    int csd = computer_generated % 10;

    //Prompt user to enter guess
    cout << "Predict the 2-digit generated number";
    int user_guess;
    cin >> user_guess;

    int ufd = user_guess / 10;
    int usd = user_guess % 10;

    if(computer_generated == user_guess){
        cout << "100% accurate";
    } else if(ufd==cfd || ufd==csd || usd==cfd || usd==csd){
        cout << "50% accurate";
    }else {
        cout << "0% accurate";
    } 


    return 0;
}