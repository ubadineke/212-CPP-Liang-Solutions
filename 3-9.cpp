#include <iostream>
#include <string>
using namespace std;

int main(){
    //Prompt user to enter day_number
    cout << "Enter day_number: ";
    int day_number;
    cin >> day_number;

    //Prompt user to enter hours_passed
    cout << "Enter hours_passed: ";
    int hours_passed;
    cin >> hours_passed;

    int remaining_hours = 24 - hours_passed;
    string day;
    switch(day_number){
        case 1: day = "Sunday"; break;
        case 2: day = "Monday"; break;
        case 3: day = "Tuesday"; break;
        case 4: day = "Wednesday"; break;
        case 5: day = "Thursday"; break;
        case 6: day = "Friday"; break;
        case 7: day = "Saturday"; break;
    }
    cout << "Today is " << day << ", Remaining Hours: " << remaining_hours;
    return 0;
}