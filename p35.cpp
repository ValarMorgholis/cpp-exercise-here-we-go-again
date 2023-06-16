#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    int tempNumber = number;
    while (tempNumber != 0)
    {
        int digit = tempNumber % 10;
        sum += digit;
        tempNumber /= 10;
    }

    cout << "The sum of the digits of " << number << " is: " << sum << endl;

    return 0;
}
