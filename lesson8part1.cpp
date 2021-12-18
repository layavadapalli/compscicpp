#include <iostream>

using namespace std;

void display(unsigned int lower, unsigned int upper)
{
    int counter = 0;

    cout << "Characters for ASCII values between " << lower << " and " << upper << endl;
    cout << "----+----+----+----+" << endl;

    while(lower <= upper)
    {
        char charAtLocation = lower;
        cout << charAtLocation;
        counter ++;

        if(counter == 20 && lower != upper)
        {
            cout << endl;
            counter = 0;
        }

        lower ++;
    }

    cout <<"\n----+----+----+----+" << endl;

}
void read ()
{
    unsigned int upper, lower;
    bool invalid;

    do
    {
        cout << "Enter lower and upper values" << endl;
        cin >> lower;
        cin >> upper;
        invalid = ((lower > upper) || (lower < 32 || lower > 126)) || (upper < 32 || upper > 126);
        if(invalid)
            cout << "Values must be in range 32 to 126 inclusive" << endl;
        else
            invalid = false;
    }
    while (invalid);

    display(lower,upper);

}


int main()
{
    read();

    return 0;
}
