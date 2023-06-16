#include <iostream>
using namespace std;

void printFibonacciSequence(int n)
{
    int num1 = 0, num2 = 1;

    cout << "Fibonacci Sequence (first " << n << " terms): ";
    cout << num1 << " " << num2 << " ";

    for (int i = 2; i < n; i++)
    {
        int nextNum = num1 + num2;
        cout << nextNum << " ";
        num1 = num2;
        num2 = nextNum;
    }

    cout << endl;
}

int main()
{
    int n = 20;

    printFibonacciSequence(n);

    return 0;
}
