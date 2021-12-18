#include <iostream>
#include <iomanip>

using namespace std;

// Part 1 of Lab 4
int main()
{
    double mass, weightEarth, weightMoon, weightVenus; //variables to store values for mass and weight on each planet
    const double accEarth = 9.81; // constant variables to store acceleration due to gravity on each planet
    const double accMoon = 1.62;
    const double accVenus = 8.87;

    cout << "Enter the mass in kg" << endl; // prompting user to input a mass
    cin >> mass; // takes in user input and stores in variable mass

    weightEarth = mass * accEarth; // calculating weight of object on earth
    weightMoon = mass * accMoon; // calculating weight of object on moon
    weightVenus = mass * accVenus; // calculating weight of object on venus

    cout << fixed << showpoint << setprecision(4); // proper formatting as per instructions
    cout << "The mass is " << mass << " kg" << endl; // displays mass of object

    if( mass  > 0) // conditional statement that executes if mass is valid
    {
        /*The following cout statements are displayed in 2 columns, the first column is left justified ( <<left<< )
          and has a width of 8 and the second column is right justified  ( << right << ) and has a width of 14. */
        cout << left << setw(8) << "Location" << right << setw(14) << "Weight (N)" << endl;
        cout << left << setw(8) << "Earth" << right << setw(14) << weightEarth << endl;
        cout << left << setw(8) << "Moon" << right << setw(14) << weightMoon << endl;
        cout << left << setw(8) << "Venus" << right << setw(14) << weightVenus << endl;

        if (weightEarth >= 1500) // conditional statement that executes if the weight of the object is too heavy
            cout << "The object is heavy" <<endl;
        else if (weightEarth < 5) // conditional statement that executes if the weight if the object is too light
            cout << "The object is light" << endl;
    }
    else // conditional statement that executes if the mass is invalid
        cout << "The mass must be greater than zero" << endl;

    return 0; // returns 0 to compiler
}