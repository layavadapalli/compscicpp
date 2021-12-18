#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int medium;
    double distance, time;
    const double carbonDioxide = 258.0;
    const double air = 331.5;
    const double helium = 972.0;
    const double hydrogen = 1270.0;

    cout << "Select the medium that sound is traveling through:" << endl;
    cout << "1 Carbon Dioxide\n" << "2 Air\n" << "3 Helium\n" << "4 Hydrogen" << endl;
    cin >> medium;

    if (medium > 0 && medium <= 4)
    {
        double time, distance;
        cout << "Enter time (in seconds)" << endl;
        cin >> time;

        if (time >= 0.000 && time <= 30.000)
        {
            if (medium == 1)
            {
                distance = time * carbonDioxide;

                cout << fixed << showpoint << setprecision(3);
                cout << "Carbon Dioxide: " << time << " seconds" << endl;
                cout << fixed << showpoint << setprecision(4);
                cout << "Traveled " << distance << " meters" << endl;
            }
            else if (medium == 2)
            {
                distance = time * air;

                cout << fixed << showpoint << setprecision(3);
                cout << "Air: " << time << " seconds" << endl;
                cout << fixed << showpoint << setprecision(4);
                cout << "Traveled " << distance << " meters" << endl;
            }
            else if (medium == 3)
            {
                distance = time * helium;

                cout << fixed << showpoint << setprecision(3);
                cout << "Helium: " << time << " seconds" << endl;
                cout << fixed << showpoint << setprecision(4);
                cout << "Traveled " << distance << " meters" << endl;
            }
            else
            {
                distance = time * hydrogen;

                cout << fixed << showpoint << setprecision(3);
                cout << "Hydrogen: " << time << " seconds" << endl;
                cout << fixed << showpoint << setprecision(4);
                cout << "Traveled " << distance << " meters" << endl;
            }

        }
        else
            cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
    }
    else
        cout << "The menu value is invalid. Please run the program again." << endl;

    return 0;
}
