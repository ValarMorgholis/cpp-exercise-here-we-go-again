#include <iostream>
using namespace std;

double calculateSeriesSum(double x, int n)
{
    double sum = 1.0;
    double term = 1.0;

    for (int i = 1; i <= n; i++)
    {
        term *= x / i;
        sum += term;
    }

    return sum;
}

int main()
{
    double x;
    int n;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of n: ";
    cin >> n;

    double seriesSum = calculateSeriesSum(x, n);

    cout << "Sum of the series: " << seriesSum << endl;

    return 0;
}
