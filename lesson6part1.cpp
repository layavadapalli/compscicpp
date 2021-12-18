#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double readSeconds()
{
    double a;
    cout << "Enter the time (in seconds)";
    cin >> a;
    cout << endl;
    return a;
}

double calculateEarthDistance(double seconds)
{
    double d, t;
    double const g = 9.8;
    t = seconds;
    d = 0.5 * g * pow(t, 2);

    return d;
}

double calculateMoonDistance(double seconds)
{
    double d, t;
    double const g = 1.6;
    t = seconds;
    d = 0.5 * g * pow(t, 2);

    return d;
}

void displayResults(double seconds, double earthDistance, double moonDistance)
{

    cout << "The object traveled " << fixed << showpoint << setprecision(4) << earthDistance <<
            " meters in " << fixed << showpoint << setprecision(2) << seconds << " seconds on Earth" << endl;

    cout << "The object traveled " << fixed << showpoint << setprecision(4) << moonDistance <<
            " meters in "<< fixed << showpoint << setprecision(2) << seconds << " seconds on the Moon" << endl;
}

int main()
{
    double seconds = readSeconds();
    if ( seconds >= 0)
    {
        double eD = calculateEarthDistance(seconds);
        double mD = calculateMoonDistance(seconds);

        displayResults(seconds, eD, mD);
    }
    else
        cout << "The time must be zero or more" << endl;

    return 0;
}
