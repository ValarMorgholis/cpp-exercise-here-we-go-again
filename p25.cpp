#include <iostream>

using namespace std;
int main()
{
    int fact = 1, n, i;

    cout << "please enter a number:";
    cin >> n;

    for (i = n; i > 0; i--)
        fact *= i;
    cout << "\n\n"
         << n << " factorial=" << fact << endl;

    return 0;
}