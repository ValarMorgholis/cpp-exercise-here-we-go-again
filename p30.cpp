#include <iostream>
#include <cmath>
using namespace std;
int main1()
{
    int n;
    int sum = 0;

    cout << "Enter  value of n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }

    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
int main2()
{
    int n;
    int sum = 0;
    int sign = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        sum += sign * i;
        sign *= -1;
    }

    cout << "The sum of the alternating series 1+2-3+4-5+...+" << n << " is: " << sum << endl;

    return 0;
}

double factorial(int num)
{
    if (num <= 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main3()
{
    int n;
    double sum = 0.0;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        sum += 1.0 / factorial(i);
    }

    cout << "The sum of the series 1 + 1/2! + 1/3! + ... + 1/" << n << "! is: " << sum << endl;

    return 0;
}
int main4()
{
    int n;
    double x, sum = 0.0;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i <= n; ++i)
    {
        sum += pow(x, i) / factorial(i);
    }

    cout << "The sum of the series 1 + x + x^2/2! + x^3/3! + ... + x^" << n << "/" << n << "! is: " << sum << endl;

    return 0;
}
