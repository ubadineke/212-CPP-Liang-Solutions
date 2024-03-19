#include <iostream>
#include <string>
using namespace std;

int main(){
    string day, future_day;

    //Prompt user to enter today's day
    cout << "Enter today's day ";
    int current_day{};
    cin >> current_day;

    //Prompt user to enter elapsed days 
    cout << "Enter elapsed days ";
    int elapsed_days{};
    cin >> elapsed_days;

    //Get value of current day based on user input
    switch(current_day){
        case 0: day = "Sunday"; break;
        case 1: day = "Monday"; break;
        case 2: day = "Tuesday"; break;
        case 3: day = "Wednesday"; break;
        case 4: day = "Thursday"; break;
        case 5: day = "Friday"; break;
        case 6: day = "Saturday"; break;
    }

    switch((current_day + elapsed_days)%7){
        case 0: future_day = "Sunday"; break;
        case 1: future_day = "Monday"; break;
        case 2: future_day = "Tuesday"; break;
        case 3: future_day = "Wednesday"; break;
        case 4: future_day = "Thursday"; break;
        case 5: future_day = "Friday"; break;
        case 6: future_day = "Saturday"; break;
    }

    //Display result 
    cout << "Today is " << day << " and the future day is " << future_day;
return 0;
}