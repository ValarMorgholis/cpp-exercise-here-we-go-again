#include <iostream>

using namespace std;

int main()
{

    int num1, num2;
    cin >> num1;
    cin >> num2;

    for (int i = num1; i < 11; i++)
    {
        for (int j = num2; j < 11; j++)
        {
            cout << i << '*' << j << '=' << i * j << endl;
        }
    }

    return 0;
}