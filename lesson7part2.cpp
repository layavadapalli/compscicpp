#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double futureValue(double,double,int);
void read();
void display(double, double, double, int);


double futureValue(double presentValue, double interestRate, int months)
{
    double futureVal = presentValue * pow((1+ interestRate), months);
    display(futureVal, presentValue,interestRate*100,months);
    return futureVal;
}

void read ()
{

    double presentVal, monthlyInterestRate;
    int numOfMonths;

    cout << "Enter present value" << endl;
    cin >> presentVal;
    cout << "Enter monthly interest rate" << endl;
    cin >> monthlyInterestRate;
    cout << "Enter months" << endl;
    cin >> numOfMonths;

    if((presentVal <= 0) || (monthlyInterestRate <= 0) || (numOfMonths <= 0))
    {
        cout << fixed << showpoint << setprecision (2);
        cout << presentVal << " " <<setprecision(3) << monthlyInterestRate << " " << setprecision(0) << numOfMonths << endl;
        cout << "One or more of the above values are not greater than zero" << endl;
    }
    else
        futureValue(presentVal,monthlyInterestRate/100,numOfMonths);

}
void display (double futureValue, double presentValue, double interestRate, int months )
{
    cout << setw(18) << "Future Value" << setw(18) << "Present Value" << setw(18)
         << "Monthly Interest" << setw(10) << "Months" << endl;

    cout << fixed << showpoint << setprecision(2);

    cout << setw(18) << futureValue << setw(18) << presentValue;

    cout << setprecision(3) << setw(18) << interestRate
         << setprecision(0) << setw(10) << months << endl;
}

int main()
{
    read();

    return 0;
}
