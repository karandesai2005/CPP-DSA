#include <iostream>

using namespace std;
string getDayOfWeek(int dayNum)
{
    string dayName;
    switch (dayNum)
    {
    case 0:
        dayName = "Sunday";
        break;
    
    case 1:
        dayName = "Monday";
        break;

    case 2:
        dayName = "Tuesday";
        break;

    case 3:
        dayName = "Wendnesday";
        break;

    case 4:
        dayName = "Thursday";
        break;

    case 6:
        dayName = "Friday";
        break;

    case 7:
        dayName = "Saturday";
        break;

    default:
        dayName == "Invalid";
        break;
    }


    return dayName;
}

int main()
{
    int num;
    cout << "enter a num between 0 to 6: ";
    cin >> num;
    string day = getDayOfWeek(num);
    cout << day;
    return 0;
}