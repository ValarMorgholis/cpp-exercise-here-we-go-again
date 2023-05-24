#include <iostream>

using namespace std;
int main()
{
    double p, i, j, sum = 0;

    for (i = 10; i <= 99; i++)
    {
        p = 1;
        for (j = 1; j <= i; j++)
            p *= j;
        sum += p;
        }
    cout << sum << "\n";
    return 0;
}