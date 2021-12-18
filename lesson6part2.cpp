#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double readFutureVal ()
{
    double futureVal;
    cout << "Enter future value" << endl;
    cin >> futureVal;

   return futureVal;
}

double readAnnualInterestRate ()
{
    double annualInterestRate;
    cout << "Enter annual interest rate" << endl;
    cin >> annualInterestRate;

    return annualInterestRate;

}

int readNumOfYears ()
{
    int numYears;
    cout << "Enter number of years" << endl;
    cin >> numYears;

    return numYears;
}

double presentValue(double futureValue, double interestRate, int numberYears)
{
    double presentVal = futureValue / (pow((1 + interestRate),numberYears));
    return presentVal;
}

void display (double presentValue, double futureValue, double annualInterestRate, int numYears)
{
    cout << "Present value: $" << fixed << showpoint << setprecision(2) << presentValue << endl;
    cout << "Future value: $" << fixed << showpoint << setprecision(2) << futureValue << endl;
    cout << "Annual interest rate: " << fixed << showpoint << setprecision(3) << annualInterestRate << "%" << endl;
    cout << "Years: " << fixed << setprecision(0) << numYears <<endl;
}
int main()
{
    double fV = readFutureVal();
    if (fV > 0)
    {
        double aIR = readAnnualInterestRate();
        if(aIR > 0)
        {
            double nY = readNumOfYears();
            if(nY > 0)
            {
                double pV = presentValue ( fV, aIR/100, nY);
                display(pV,fV,aIR,nY);
            }
            else
                cout << "The number of years must be greater than zero"<<endl;
        }
        else
            cout << "The annual interest rate must be greater than zero"<<endl;
    }
    else
        cout << "The future value must be greater than zero"<< endl;

    return 0;
}
