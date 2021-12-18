#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long long int seconds, days, hours, minutes, remainingSecs;
    const long long int secInDay = 86400;
    const long long int secInHour = 3600;
    const long long int secInMin = 60;

    cout << "Enter seconds" << endl;
    cin >> seconds;

    cout <<"Total seconds: " << seconds << endl;

    if(seconds <= 0)
    {
        cout << endl;
        cout << "Total seconds must be greater than zero" << endl;
    }
    else
    {
        // calculate days
        days = seconds / secInDay;
        remainingSecs = seconds % secInDay;
        // calculate hours
        hours = remainingSecs / secInHour;
        remainingSecs %= secInHour;
        //calculate minutes
        minutes = remainingSecs / secInMin;
        remainingSecs %= secInMin;
        //calculate seconds
        seconds = remainingSecs;

        //displaying days, hours, minutes, and seconds
        cout << endl;
        if(days != 0)
            cout << days << " day(s)" << endl;
        if(hours != 0)
            cout << hours << " hour(s)" << endl;
        if( minutes != 0)
            cout << minutes << " minute(s)" << endl;
        if(seconds !=0)
            cout << seconds << " second(s)" << endl;
    }
    return 0;
}
