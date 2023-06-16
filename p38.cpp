#include <iostream>
using namespace std;
int main()
{
    int number;
    int multiDigitCount = 0;

    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < 10; ++i)
    {
        cin >> number;
        if (number >= 10 || number <= -10)
        {
            multiDigitCount++;
        }
    }

    cout << "The number of multi-digit numbers entered is: " << multiDigitCount << endl;

    return 0;
}
