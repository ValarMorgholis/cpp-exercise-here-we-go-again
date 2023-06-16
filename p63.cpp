#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int gcdResult = gcd(num1, num2);

    cout << "The BMM of " << num1 << " and " << num2 << " is: " << gcdResult << endl;

    return 0;
}
