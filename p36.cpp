#include <iostream>
using namespace std;
int countEvenDigits(int number)
{
    int count = 0;
    while (number != 0)
    {
        int digit = number % 10;
        if (digit % 2 == 0)
        {
            count++;
        }
        number /= 10;
    }
    return count;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int evenCount = countEvenDigits(number);

    cout << "The number of even digits in " << number << " is: " << evenCount << endl;

    return 0;
}
