#include <iostream>
#include <iomanip>

using namespace std;

double toCelsius(double fahrenheit)
{
    double celsius = (fahrenheit -32)/1.8;
    return celsius;
}

double toKelvin(double celsius)
{
    double kelvin = celsius + 273.15;
    return kelvin;
}

void display(double fahrenheit, double celsius, double kelvin)
{
    cout << setw(18) << fahrenheit << setw(18) << celsius << setw(18) << kelvin << endl;
}

int main()
{
    double f, c, k;
    double start, end, increment;
    bool invalid;

    do
    {
        cin >> start;
        cin >> end;
        cin >> increment;

        invalid = ((start > end) || (increment <= 0.0));
        if(invalid)
            cout << "Starting temperature must be <= ending temperature and increment must be > 0.0" << endl;
        else
            invalid = false;
    }
    while (invalid);

    cout << setw(18) << "Fahrenheit" << setw(18) << "Celsius" << setw(18) << "Kelvin" << endl;


    while(start <= end)
    {
        f = start;
        c = toCelsius(f);
        k = toKelvin(c);
        cout << fixed << showpoint << setprecision (4);
        display(f,c,k);

        start += increment;
    }

}
