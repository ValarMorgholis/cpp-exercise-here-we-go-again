#include <iostream>

using namespace std;
int main()
{
    int i, f = 1, n;

    cout << "Enter Number: ";
    cin >> n;

    for (i = n; i >= 2; --i)
        f = f * i;
    cout << f;
    
    return 0;
}