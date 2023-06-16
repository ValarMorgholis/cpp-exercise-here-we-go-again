#include <iostream>
using namespace std;

long int calculateFactorial(int number)
{
    long int factorial = 1;

    for (int i = 2; i <= number; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    long int factorial = calculateFactorial(number);

    cout << "The factorial of " << number << " is: " << factorial << endl;

    return 0;
}
