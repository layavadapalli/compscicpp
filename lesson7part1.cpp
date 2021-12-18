#include <iostream>
#include <iomanip>

using namespace std;

bool read (int &numOrdered, int &inStock, double &shippingCharge)
{
    char shippingStatus;

    cout << "Spools to be ordered" << endl;
    cin >> numOrdered;
    if(numOrdered < 1)
    {
        cout << "Spools order must be 1 or more" << endl;
        return false;
    }

    cout << "Spools in stock" << endl;
    cin >> inStock;
    if(inStock < 0)
    {
        cout << "Spools in stock must be 0 or more" << endl;
        return false;
    }
    cout << "Special shipping and handling (y or n)" << endl;
    cin >> shippingStatus;

    if (shippingStatus == 'y')
    {
        cout << "Shipping and handling amount" << endl;
        cin >> shippingCharge ;
        if(shippingCharge < 0)
        {
            cout << "The spool shipping and handling charge must be 0.0 or more" << endl;
            return false;
        }
    }
    else
        shippingCharge = 12.99;
    return true;
}

void display(int &numOrdered, int &inStock, double &shippingCharge)
{
     int readyToShip, backOrder;
     double subtotal, shipping, total;
     int const pricePerSpool = 104;
     if (numOrdered >= inStock)
     {
         readyToShip = inStock;
         backOrder = numOrdered-inStock;
     }
     else
     {
         readyToShip = numOrdered;
         backOrder = 0;
     }

     subtotal = readyToShip * pricePerSpool;
     shipping = readyToShip * shippingCharge;
     total = subtotal + shipping;


     cout << "Spools ready to ship: " << readyToShip << endl;
     cout << "Spools on back-order: " << backOrder << endl;

     cout << fixed << showpoint << setprecision(2);

     cout << "Subtotal ready to ship: $" << setw(10) << subtotal << endl;
     cout << "Shipping and handling:  $" << setw(10) << shipping << endl;
     cout << "Total shipping charges: $" << setw(10) << total << endl;

}

int main()
{
    int numOrdered, inStock;
    double shippingCharge;


    if(read(numOrdered, inStock, shippingCharge))
        display(numOrdered, inStock, shippingCharge);

    return 0;

}
