#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    unsigned int medium;
    double distance, time;
    const int air = 1100; const int water = 4900; const int steel = 16400;

    cout << "Select the medium that sound is traveling through:" << endl;
    cout << "1 Air\n" << "2 Water\n" << "3 Steel" << endl;
    cin >> medium;

    switch (medium)
    {
        case  1 :

            cout << "Enter distance (in feet)" << endl;
            cin >> distance;

            if(distance > 0)
            {
                time = distance / air;
                cout << fixed << showpoint << setprecision(4);
                cout << "Air: " <<  distance << " ft" << endl;
                cout << "Traveled for " << time << " seconds" << endl;
            }
            else
                cout << "The distance must be greater than zero" << endl;
            break;

        case  2 :

            cout << "Enter distance (in feet)" << endl;
            cin >> distance;

            if(distance > 0)
            {
                time = distance / water;
                cout << fixed << showpoint << setprecision(4);
                cout << "Water: " <<  distance << " ft" << endl;
                cout << "Traveled for " << time << " seconds" << endl;
            }
            else
                cout << "The distance must be greater than zero" << endl;

            break;

        case  3 :

            cout << "Enter distance (in feet)" << endl;
            cin >> distance;

            if(distance > 0)
            {
                time = distance / steel;
                cout << fixed << showpoint << setprecision(4);
                cout << "Steel: " <<  distance << " ft" << endl;
                cout << "Traveled for " << time << " seconds" << endl;
            }
            else
                cout << "The distance must be greater than zero" << endl;
            break;

        default :
            cout << "The menu value is invalid. Please run the program again." << endl;
    }

    return 0;
}
