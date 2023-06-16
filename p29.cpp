#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double base, exponent;

    cout << "Enter the  number one: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = pow(base, exponent);

    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}
