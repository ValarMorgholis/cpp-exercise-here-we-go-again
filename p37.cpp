#include <iostream>
using namespace std;
int factorial(int num)
{
    if (num <= 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int factorialSumOfDigits(int number)
{
    int sum = 0;
    while (number != 0)
    {
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }
    return sum;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int factorialSum = factorialSumOfDigits(number);

    cout << "The factorial sum of the digits of " << number << " is: " << factorialSum << endl;

    return 0;
}
