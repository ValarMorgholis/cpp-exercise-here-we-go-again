#include <iostream>
using namespace std;
int fiboSum(int n)
{
    int sum = 0;
    int term1 = 0;
    int term2 = 1;

    for (int i = 1; i <= n; ++i)
    {
        sum += term1;
        int nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }

    return sum;
}

int main()
{
    int n;
    cout << "Enter the number  terms: ";
    cin >> n;

    int sum = fiboSum(n);
    cout << "Sum of the first " << n << " terms of the Fibonacci sequence: " << sum << endl;

    return 0;
}
