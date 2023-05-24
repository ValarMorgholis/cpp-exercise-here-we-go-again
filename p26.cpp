#include <iostream>

using namespace std;
int main()
{
    long double p, i, j;
    
    for (i = 10; i <= 1000; i+=2)
    {
        p = 1;
        cout << i << ":";
        for (j = 1; j <= i; j++)
            p *= j;
        cout << p << "\n";
    }
    return 0;
}