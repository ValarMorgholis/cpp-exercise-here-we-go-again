#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
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

    cout << "Factorial sum of the digits: " << factorialSum << endl;

    return 0;
}
